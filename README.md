# Smart Entryway Voice Control

Build a smart home prototype that uses OLED display, RGB LED, BME280 to accept local voice commands. Include setup instructions, a circuit diagram, tested firmware, and sample output.

## Project details

| Field | Value |
| --- | --- |
| Roadmap ID | 13 |
| Category | Smart Home |
| Platform | Home Assistant + ESPHome |
| Difficulty | Advanced |
| Estimated build time | 52 hours |
| Connectivity | Wi-Fi |
| Core components | OLED display, RGB LED, BME280 |
| Control mode | closed loop control |

## Repository layout

- `firmware/device.yaml`: runnable firmware or application
- `docs/wiring.md`: suggested low-voltage wiring plan
- `docs/architecture.md`: system data flow
- `docs/test-plan.md`: repeatable verification steps
- `sample-data/example.json`: example telemetry record
- `tools/validate.py`: dependency-free repository validation

## Quick start

1. Add Wi-Fi values to your ESPHome secrets file.
2. Validate with `esphome config firmware/device.yaml`.
3. Flash to an ESP32 and verify the entity states before connecting an actuator.

## Expected behavior

Voice Control demonstration with repeatable test steps. The default implementation supports simulated or generic analog inputs so the control path can be exercised before hardware-specific drivers are added.

## Hardware adaptation

The included code is a safe reference implementation. Update pin assignments and sensor conversions from the exact component datasheets, then repeat the test plan before connecting actuators.

## License

MIT
