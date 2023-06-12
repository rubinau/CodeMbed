#ifndef _ROS_control_EncoderData_h
#define _ROS_control_EncoderData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace control
{

  class EncoderData : public ros::Msg
  {
    public:
      typedef int32_t _encoder1_type;
      _encoder1_type encoder1;
      typedef int32_t _encoder2_type;
      _encoder2_type encoder2;
      typedef int32_t _encoder3_type;
      _encoder3_type encoder3;
      typedef int32_t _encoder4_type;
      _encoder4_type encoder4;
      typedef int32_t _encoder5_type;
      _encoder5_type encoder5;
      typedef int32_t _encoder6_type;
      _encoder6_type encoder6;
      typedef int32_t _encoder7_type;
      _encoder7_type encoder7;

    EncoderData():
      encoder1(0),
      encoder2(0),
      encoder3(0),
      encoder4(0),
      encoder5(0),
      encoder6(0),
      encoder7(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_encoder1;
      u_encoder1.real = this->encoder1;
      *(outbuffer + offset + 0) = (u_encoder1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder1);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder2;
      u_encoder2.real = this->encoder2;
      *(outbuffer + offset + 0) = (u_encoder2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder2);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder3;
      u_encoder3.real = this->encoder3;
      *(outbuffer + offset + 0) = (u_encoder3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder3);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder4;
      u_encoder4.real = this->encoder4;
      *(outbuffer + offset + 0) = (u_encoder4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder4);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder5;
      u_encoder5.real = this->encoder5;
      *(outbuffer + offset + 0) = (u_encoder5.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder5.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder5.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder5.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder5);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder6;
      u_encoder6.real = this->encoder6;
      *(outbuffer + offset + 0) = (u_encoder6.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder6.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder6.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder6.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder6);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder7;
      u_encoder7.real = this->encoder7;
      *(outbuffer + offset + 0) = (u_encoder7.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder7.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder7.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder7.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder7);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_encoder1;
      u_encoder1.base = 0;
      u_encoder1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder1 = u_encoder1.real;
      offset += sizeof(this->encoder1);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder2;
      u_encoder2.base = 0;
      u_encoder2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder2 = u_encoder2.real;
      offset += sizeof(this->encoder2);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder3;
      u_encoder3.base = 0;
      u_encoder3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder3 = u_encoder3.real;
      offset += sizeof(this->encoder3);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder4;
      u_encoder4.base = 0;
      u_encoder4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder4 = u_encoder4.real;
      offset += sizeof(this->encoder4);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder5;
      u_encoder5.base = 0;
      u_encoder5.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder5.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder5.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder5.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder5 = u_encoder5.real;
      offset += sizeof(this->encoder5);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder6;
      u_encoder6.base = 0;
      u_encoder6.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder6.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder6.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder6.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder6 = u_encoder6.real;
      offset += sizeof(this->encoder6);
      union {
        int32_t real;
        uint32_t base;
      } u_encoder7;
      u_encoder7.base = 0;
      u_encoder7.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_encoder7.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_encoder7.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_encoder7.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->encoder7 = u_encoder7.real;
      offset += sizeof(this->encoder7);
     return offset;
    }

    virtual const char * getType() override { return "control/EncoderData"; };
    virtual const char * getMD5() override { return "f0cef71b29f8ea9b1dae81320c4cfb0c"; };

  };

}
#endif
