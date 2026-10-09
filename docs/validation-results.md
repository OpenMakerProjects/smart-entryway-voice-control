# Validation results

On 2026-10-10 IST, recovery run 37988157605 losslessly decoded 59 original-image text chunks, committed PNG to the same automation branch, removed all transport files and explicitly ran full gates on the decoded commit. C++ OLED scaling/clamping/NaN tests, 3 PNG transport tests, PNG/SVG/links/MIT/credential gates, ESPHome 2026.9.1 config and actual ESP32 ESP-IDF compile passed. RAM 45408 / 180736 bytes; flash 748103 / 1835008 bytes.

PNG 1407262 bytes, 1536×1024, SHA256 77a4d9da94a936697faa71199a49ab48c8be8088185ccece27898990e2e27e83. No staging/base64 files remain on the corrected branch.

PR #1 merged prematurely at d6299cb0367c78e0613eb7bdac710e261b52d7fc without the PNG and with failed board checks. That main was incomplete and was excluded from verified completion. The authorized follow-up PR #2 must remove stale main staging files and add the validated PNG. This documentation commit triggers fresh push checks; both push and PR checks must pass on its exact head before remediation merge and main verification.

Physical board, sensor/display, Home Assistant and local voice pipeline tests were not performed.
