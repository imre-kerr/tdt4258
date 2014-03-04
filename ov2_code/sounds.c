#include "sounds.h"

static square_note_t sq_silence[] = 
  {
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
  };

static triangle_note_t tri_silence[] = 
  {
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0}
  };
static noise_note_t noise_silence[] = 
  {
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0}
  };

static square_note_t coin_notes[] = 
  {
    {.period_begin = 2*NOTE_Bb, .period_end = 2*NOTE_Bb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/1.4, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/1.4, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/1.96, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/1.96, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/2.74, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/2.74, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/3.84, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/3.84, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/5.38, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/5.38, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/7.53, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/7.53, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10.54, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10.54, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/14.76, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/14.76, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/20.66, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/20.66, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/28.93, .duty_cycle = 50, .duration = 4410},
    {.period_begin = NOTE_Eb, .period_end = NOTE_Eb, .octave = 5, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/28.93, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/40.5, .duty_cycle = 50, .duration = 4410}
  };

sound_t coin = 
  {
    .note_count = 11,
    .note_duration = 4410,
    .sq1_notes = coin_notes,
    .sq2_notes = sq_silence,
    .tri_notes = tri_silence,
    .noise_notes = noise_silence
  };

static noise_note_t cannon_notes[] =
  {
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/1.4, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/1.96, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/1.96, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/2.74, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/2.74, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/3.84, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/3.84, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/5.38, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/5.38, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/7.53, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/7.53, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10.54, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10.54, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/14.76, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/14.76, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/20.66, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/20.66, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/28.93, .multiplier = 1, .duration = 4410},
    {.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/28.93, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/28.93, .multiplier = 1, .duration = 4410},
  };

sound_t cannon =
  {
    .note_count = 11,
    .note_duration = 4410,
    .sq1_notes = sq_silence,
    .sq2_notes = sq_silence,
    .tri_notes = tri_silence,
    .noise_notes = cannon_notes
  };

static triangle_note_t kchip_tri_notes[] =
  {
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_E, .period_end = NOTE_E, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_E, .period_end = NOTE_E, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_E, .period_end = NOTE_E, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_E, .period_end = NOTE_E, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 1, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL, .amp_end = MAX_AMPLITUDE_PER_CHANNEL, .duration = 8820},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
    {.amp_begin = 0, .amp_end = 0},
  };

static noise_note_t kchip_noise_notes[] =
{
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/20, .multiplier = 1, .duration = 8820},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/20, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/30, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/20, .multiplier = 1, .duration = 8820},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/20, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/30, .multiplier = 1, .duration = 8820},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/30, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/40, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .multiplier = 1, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
};

static square_note_t kchip_sqr_notes1[] =
{
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_A, .period_end = NOTE_A, .octave = 4, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.period_begin = NOTE_E, .period_end = NOTE_E, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_E, .period_end = NOTE_E, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_D, .period_end = NOTE_D, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 8820},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
	{.amp_begin = 0, .amp_end = 0},
};

sound_t k_chip_tune =
  {
    .note_count = 64,
    .note_duration = 8820,
    .sq1_notes = kchip_sqr_notes1,
    .sq2_notes = sq_silence,
    .tri_notes = kchip_tri_notes,
    .noise_notes = kchip_noise_notes
  };

static square_note_t test_sqr_notes1[] =
{
	{.period_begin = NOTE_A, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 6615},
	{.period_begin = NOTE_A, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 6615},
	{.period_begin = NOTE_A, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/10, .duty_cycle = 50, .duration = 6615},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/10, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/30, .duty_cycle = 50, .duration = 6615},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/30, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/90, .duty_cycle = 50, .duration = 6615},
	{.period_begin = NOTE_C, .period_end = NOTE_C, .octave = 3, .amp_begin = MAX_AMPLITUDE_PER_CHANNEL/90, .amp_end = MAX_AMPLITUDE_PER_CHANNEL/270, .duty_cycle = 50, .duration = 6615},
};

sound_t test =
  {
    .note_count = 6,
    .note_duration = 6615,
    .sq1_notes = test_sqr_notes1,
    .sq2_notes = sq_silence,
    .tri_notes = tri_silence,
    .noise_notes = noise_silence
  };




