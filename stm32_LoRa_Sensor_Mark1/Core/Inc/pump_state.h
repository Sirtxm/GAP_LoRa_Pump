#ifndef __PUMP_STATE_H
#define __PUMP_STATE_H

// ประกาศ Enum สำหรับสถานะต่าง ๆ
typedef enum {
//  STATE_IDLE,
  STATE_PUMP_ON,
  STATE_AUTO,
  STATE_PUMP_OFF
} PumpState_t;

// ประกาศตัวแปร extern เพื่อใช้งานข้ามไฟล์
extern PumpState_t pumpState;
extern uint8_t statePump;
extern uint8_t durationMinutes;

void PumpStateMachine(PumpState_t state);

#endif /* __PUMP_STATE_H */
