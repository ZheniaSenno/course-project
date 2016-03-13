﻿using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ServerSide.Models
{
    public class User
    {
        public int Id { get; set; }
        [Required]
        public string Name { get; set; }
    }
}