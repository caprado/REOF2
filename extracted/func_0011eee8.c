void func_0011eee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x25 << 16;                                            // 0x0011eee8: lui $a1, 0x25
    v1 = 0x25 << 16;                                            // 0x0011eeec: lui $v1, 0x25
    v0 = a1 + 0x3080;                                           // 0x0011eef0: addiu $v0, $a1, 0x3080
    a0 = 0x3f;                                                  // 0x0011eef4: addiu $a0, $zero, 0x3f
    g_00253480 = v0;  // Global at 0x00253480                   // 0x0011eef8: sw $v0, 0x3480($v1)
    v1 = v0 + 0x400;                                            // 0x0011eefc: addiu $v1, $v0, 0x400
    v0 = v0 + 0x3f0;                                            // 0x0011ef00: addiu $v0, $v0, 0x3f0
    /* nop */                                                   // 0x0011ef04: nop 
label_0x11ef08:
    g_00253470 = v1;  // Global at 0x00253470                   // 0x0011ef08: sw $v1, 0($v0)
    a0 = a0 + -1;                                               // 0x0011ef0c: addiu $a0, $a0, -1
    v0 = v0 + -0x10;                                            // 0x0011ef10: addiu $v0, $v0, -0x10
    v1 = v1 + -0x10;                                            // 0x0011ef14: addiu $v1, $v1, -0x10
    /* nop */                                                   // 0x0011ef18: nop 
    if (a0 >= 0) goto label_0x11ef08;                           // 0x0011ef1c: bgez $a0, 0x11ef08
    /* nop */                                                   // 0x0011ef20: nop 
    v1 = a1 + 0x3080;                                           // 0x0011ef24: addiu $v1, $a1, 0x3080
    return;                                                     // 0x0011ef2c: jr $ra
    g_00253470 = 0;  // Global at 0x00253470                    // 0x0011ef30: sw $zero, 0x3f0($v1)
}