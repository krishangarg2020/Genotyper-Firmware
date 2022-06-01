# type: ignore

# from gero.util import logging_config
import logging
import sys, pty

import dearpygui.dearpygui as dpg  # type: ignore

# TODO: Add a dynaconf for this app to store its settings state
# TODO:

logging.basicConfig(
    stream=sys.stdout,
    encoding='utf-8',
    level=logging.DEBUG,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
log = logging.getLogger('Emulator')

if __name__ == '__main__':

    def save_callback():
        log.info("Save Clicked")

    def start_emulators():
        log.debug("Trying to start some socat ports")

    dpg.create_context()
    dpg.create_viewport()
    dpg.setup_dearpygui()

    with dpg.window(
        label="Serial Device Emulator",
        no_resize=True,
        no_close=True,
        no_move=True,
        no_collapse=False,
        width=300,
        pos=[dpg.get_viewport_width()-300, 0]
    ):
        dpg.add_text(
            "Emulate a serial device for integration testing purposes.", wrap=300)
        dpg.add_input_text(default_value="/dev/ttyUSB0010",
                           label="device path")
        dpg.add_combo(["9600", "115200"],
                      default_value="9600", label="Baud Rate")

        dpg.add_input_text(default_value="/dev/ttyUSB0010",
                           label="device path")
        dpg.add_combo(["9600", "115200"],
                      default_value="9600", label="Baud Rate")

        dpg.add_input_text(default_value="/dev/ttyUSB0010",
                           label="device path")
        dpg.add_combo(["9600", "115200"],
                      default_value="9600", label="Baud Rate")
        dpg.add_button(label="Save", callback=save_callback)
        dpg.add_button(label="Start", callback=start_emulators)

    dpg.show_viewport()
    dpg.start_dearpygui()
    dpg.destroy_context()
