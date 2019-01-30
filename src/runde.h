    R_EIP++;
    switch (nextop) {
    case 0xC1:  /* FADDP ST1, ST0 */
        ST(1).d += ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xC0:  /* FADDP STx, ST0 */
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xC7:
        ST(nextop&7).d += ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xC9:  /* FMULP ST1, ST0 */
        ST1.d *= ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xC8:  /* FMULP STx, ST0 */
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xCF:
        ST(nextop&7).d *= ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xD9:  /* FCOMPP */
        fpu_fcom(emu, ST1.d);
        fpu_do_pop(emu);
        fpu_do_pop(emu);
        break;

        /*ST(1).d = ST0.d - ST(1).d;
        fpu_do_pop(emu);
        break;*/
    case 0xE0:  /* FSUBRP STx, ST0 */
    case 0xE1:  /* FSUBRP ST1, ST0 */
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
        ST(nextop&7).d = ST0.d - ST(nextop&7).d;
        fpu_do_pop(emu);
        break;
   case 0xE9:  /* FSUBP ST1, ST0 */
        ST1.d -= ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xE8:  /* FSUBP STx, ST0 */
    case 0xEA:
    case 0xEB:
    case 0xEC:
    case 0xED:
    case 0xEE:
    case 0xEF:
        ST(nextop&7).d -= ST0.d;
        fpu_do_pop(emu);
        break;
        /*ST(1).d = ST0.d / ST(1).d;
        fpu_do_pop(emu);
        break;*/
    case 0xF0:  /* FDIVRP STx, ST0 */
    case 0xF1:  /* FDIVRP ST1, ST0 */
    case 0xF2:
    case 0xF3:
    case 0xF4:
    case 0xF5:
    case 0xF6:
    case 0xF7:
        ST(nextop&7).d = ST0.d / ST(nextop&7).d;
        fpu_do_pop(emu);
        break;
        /*d = ST0.d;
        fpu_do_pop(emu);
        ST0.d /= d;
        break;*/
    case 0xF8:  /* FDIVP STx, ST0 */
    case 0xF9:  /* FDIVP ST1, ST0 */
    case 0xFA:
    case 0xFB:
    case 0xFC:
    case 0xFD:
    case 0xFE:
    case 0xFF:
        ST(nextop&7).d /= ST0.d;
        fpu_do_pop(emu);
        break;
    default:
        switch((nextop>>3)&7) {
        default:
            UnimpOpcode(emu);
            goto fini;
        }
    }