/*
  This file is part of wireworld_common
  Copyright (C) 2015  Julien Thevenon ( julien_thevenon at yahoo.fr )

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef _WIREWORLD_CONFIGURATION_H_
#define _WIREWORLD_CONFIGURATION_H_

#include <cinttypes>
#include <string>

namespace wireworld_common
{
  class wireworld_configuration
  {
  public:
    inline wireworld_configuration(void);

    inline void set_input_file_name(const std::string & p_name);
    inline const std::string & get_input_file_name(void)const;
    inline void set_nb_max_cycle(uint32_t p_nb_max_cycle);
    inline uint32_t get_nb_max_cycle(void)const;
    inline void set_start_cycle(uint32_t p_start_cycle);
    inline uint32_t get_start_cycle(void)const;
    inline void set_refresh_interval(uint32_t p_refresh_interval);
    inline uint32_t get_refresh_interval(void)const;
    inline void set_display_duration(uint32_t p_display_duration);
    inline uint32_t get_display_duration(void)const;
  private:
    std::string m_input_file_name;
    uint32_t m_nb_max_cycle;
    uint32_t m_start_cycle;
    uint32_t m_refresh_interval;
    uint32_t m_display_duration;
  };

  //------------------------------------------------------------------------------
  wireworld_configuration::wireworld_configuration(void):
    m_input_file_name("wireworld.txt"),
    m_nb_max_cycle(1000),
    m_start_cycle(0),
    m_refresh_interval(1),
    m_display_duration(500)
      {
      }

    //------------------------------------------------------------------------------
    void wireworld_configuration::set_input_file_name(const std::string & p_name)
    {
      m_input_file_name = p_name;
    }

    //------------------------------------------------------------------------------
    const std::string & wireworld_configuration::get_input_file_name(void)const
      {
	return m_input_file_name;
      }

    //------------------------------------------------------------------------------
    void wireworld_configuration::set_nb_max_cycle(uint32_t p_nb_max_cycle)
    {
      m_nb_max_cycle = p_nb_max_cycle;
    }

    //------------------------------------------------------------------------------
    uint32_t wireworld_configuration::get_nb_max_cycle(void)const
    {
      return m_nb_max_cycle;
    }

    //------------------------------------------------------------------------------
    void wireworld_configuration::set_start_cycle(uint32_t p_start_cycle)
    {
      m_start_cycle = p_start_cycle;
    }

    //------------------------------------------------------------------------------
    uint32_t wireworld_configuration::get_start_cycle(void)const
    {
      return m_start_cycle;
    }

    //------------------------------------------------------------------------------
    void wireworld_configuration::set_refresh_interval(uint32_t p_refresh_interval)
    {
      m_refresh_interval = p_refresh_interval;
    }

    //------------------------------------------------------------------------------
    uint32_t wireworld_configuration::get_refresh_interval(void)const
    {
      return m_refresh_interval;
    }

    //------------------------------------------------------------------------------
    void wireworld_configuration::set_display_duration(uint32_t p_display_duration)
    {
      m_display_duration = p_display_duration;
    }

    //------------------------------------------------------------------------------
    uint32_t wireworld_configuration::get_display_duration(void)const
    {
      return m_display_duration;
    }
}
#endif /* _WIREWORLD_CONFIGURATION_H_ */
//EOF
