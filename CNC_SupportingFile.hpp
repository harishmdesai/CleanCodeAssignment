#ifndef CNC_SUPPORTINGFILE_HPP__
#define CNC_SUPPORTINGFILE_HPP__

#define TRUE 01
#define FALSE 00
extern bool WithinALimit (float value, float Ref);

bool WithinALimit (float value, float Ref)
{
  return (value<Ref);
}

#endif
