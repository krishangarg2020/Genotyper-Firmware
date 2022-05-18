# type: ignore

# from gero.util import logging_config
import logging
import sys

import dearpygui.dearpygui as dpg  # type: ignore


logging.basicConfig(
    stream=sys.stdout,
    encoding='utf-8',
    level=logging.DEBUG,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
log = logging.getLogger('Emulator')


if __name__ == '__main__':
    log.debug("hello")
    log.info("hello")

    def save_callback():
        print("Save Clicked")

    dpg.create_context()
    dpg.create_viewport()
    dpg.setup_dearpygui()

    with dpg.window(label="Serial Device Emulator"):
        dpg.add_text(
            "Emulate a serial device for integration testing purposes.")
        dpg.add_button(label="Save", callback=save_callback)
        dpg.add_input_text(default_value="/dev/ttyUSB0010",
                           label="device path")
        dpg.add_combo(["9600", "115200"],
                      default_value="9600", label="Baud Rate")
        dpg.add_slider_int(label="parameter to transmit")

    dpg.show_viewport()
    dpg.start_dearpygui()
    dpg.destroy_context()
