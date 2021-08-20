.. _tmp100_sample:

TMP100 sample
#############

Overview
********

A sample showing how to use the :dtcompatible:`ti,tmp100` sensor.

Requirements
************

A board with this sensor built in to its :ref:`devicetree <dt-guide>`, or a
devicetree overlay with such a node added.

Building and Running
********************

To build and flash the sample for the :ref:`nrf52840dk_nrf52811`:

.. zephyr-app-commands::
   :zephyr-app: samples/sensor/tmp100
   :board: nrf52840dk_nrf52811
   :goals: build flash
   :compact:
