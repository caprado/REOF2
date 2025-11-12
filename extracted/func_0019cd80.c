void func_0019cd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x30);                              // 0x0019cd80: lw $v0, 0x30($a0)
    at = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x0019cd84: sltu $at, $a1, $v0
    if (at != 0) goto label_0x19cd98;                           // 0x0019cd88: bnez $at, 0x19cd98
    /* nop */                                                   // 0x0019cd8c: nop 
    goto label_0x19ce54;                                        // 0x0019cd90: b 0x19ce54
    v0 = -1;                                                    // 0x0019cd94: addiu $v0, $zero, -1
label_0x19cd98:
    t4 = *(int16_t*)((a0) + 0x1a);                              // 0x0019cd98: lh $t4, 0x1a($a0)
    t3 = *(int16_t*)((a0) + 0x1c);                              // 0x0019cda0: lh $t3, 0x1c($a0)
    a3 = 0x14;                                                  // 0x0019cda4: addiu $a3, $zero, 0x14
    v0 = *(int16_t*)((a0) + 0x14);                              // 0x0019cda8: lh $v0, 0x14($a0)
    t0 = 0x13;                                                  // 0x0019cdac: addiu $t0, $zero, 0x13
    t1 = 2;                                                     // 0x0019cdb0: addiu $t1, $zero, 2
    goto label_0x19ce48;                                        // 0x0019cdb4: b 0x19ce48
    t2 = 1;                                                     // 0x0019cdb8: addiu $t2, $zero, 1
label_0x19cdbc:
    v1 = *(int32_t*)((a0) + 0x20);                              // 0x0019cdbc: lw $v1, 0x20($a0)
    if (v1 == 0) goto label_0x19ce1c;                           // 0x0019cdc0: beqz $v1, 0x19ce1c
    /* nop */                                                   // 0x0019cdc4: nop 
    if (v1 == t2) goto label_0x19ce10;                          // 0x0019cdc8: beq $v1, $t2, 0x19ce10
    /* nop */                                                   // 0x0019cdcc: nop 
    if (v1 == t1) goto label_0x19ce04;                          // 0x0019cdd0: beq $v1, $t1, 0x19ce04
    /* nop */                                                   // 0x0019cdd4: nop 
    if (v1 == t0) goto label_0x19cdfc;                          // 0x0019cdd8: beq $v1, $t0, 0x19cdfc
    /* nop */                                                   // 0x0019cddc: nop 
    if (v1 == a3) goto label_0x19cdf0;                          // 0x0019cde0: beq $v1, $a3, 0x19cdf0
    /* nop */                                                   // 0x0019cde4: nop 
    goto label_0x19ce54;                                        // 0x0019cde8: b 0x19ce54
    v0 = -1;                                                    // 0x0019cdec: addiu $v0, $zero, -1
label_0x19cdf0:
    /* multiply: t4 * t3 -> hi:lo */                            // 0x0019cdf0: mult $ac3, $t4, $t3
    goto label_0x19ce24;                                        // 0x0019cdf4: b 0x19ce24
    v1 = v1 >> 1;                                               // 0x0019cdf8: sra $v1, $v1, 1
label_0x19cdfc:
    goto label_0x19ce24;                                        // 0x0019cdfc: b 0x19ce24
    /* multiply: t4 * t3 -> hi:lo */                            // 0x0019ce00: mult $ac3, $t4, $t3
label_0x19ce04:
    /* multiply: t4 * t3 -> hi:lo */                            // 0x0019ce04: mult $ac3, $t4, $t3
    goto label_0x19ce24;                                        // 0x0019ce08: b 0x19ce24
    v1 = v1 << 1;                                               // 0x0019ce0c: sll $v1, $v1, 1
label_0x19ce10:
    /* multiply: t4 * t3 -> hi:lo */                            // 0x0019ce10: mult $ac3, $t4, $t3
    goto label_0x19ce24;                                        // 0x0019ce14: b 0x19ce24
    v1 = v1 << 2;                                               // 0x0019ce18: sll $v1, $v1, 2
label_0x19ce1c:
    /* multiply: t4 * t3 -> hi:lo */                            // 0x0019ce1c: mult $ac3, $t4, $t3
    v1 = v1 << 2;                                               // 0x0019ce20: sll $v1, $v1, 2
label_0x19ce24:
    a2 = v1 + 0xff;                                             // 0x0019ce24: addiu $a2, $v1, 0xff
    if (a2 >= 0) goto label_0x19ce38;                           // 0x0019ce28: bgez $a2, 0x19ce38
    v1 = a2 >> 8;                                               // 0x0019ce2c: sra $v1, $a2, 8
    v1 = a2 + 0xff;                                             // 0x0019ce30: addiu $v1, $a2, 0xff
    v1 = v1 >> 8;                                               // 0x0019ce34: sra $v1, $v1, 8
label_0x19ce38:
    v0 = v0 + v1;                                               // 0x0019ce38: addu $v0, $v0, $v1
    t4 = t4 >> 1;                                               // 0x0019ce3c: sra $t4, $t4, 1
    t3 = t3 >> 1;                                               // 0x0019ce40: sra $t3, $t3, 1
    t5 = t5 + 1;                                                // 0x0019ce44: addiu $t5, $t5, 1
label_0x19ce48:
    v1 = (t5 < a1) ? 1 : 0;                                     // 0x0019ce48: slt $v1, $t5, $a1
    if (v1 != 0) goto label_0x19cdbc;                           // 0x0019ce4c: bnez $v1, 0x19cdbc
    /* nop */                                                   // 0x0019ce50: nop 
label_0x19ce54:
    return;                                                     // 0x0019ce54: jr $ra
    /* nop */                                                   // 0x0019ce58: nop 
}