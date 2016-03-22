﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using Microsoft.AspNet.Identity;
using Microsoft.AspNet.Identity.EntityFramework;

namespace ServerSide
{
    public class AuthContext : IdentityDbContext<IdentityUser>
    {
        public AuthContext() : base("name=DefaultConnection")
        {

        }
    }
}