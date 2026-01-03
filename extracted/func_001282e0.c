void func_001282e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001282e0: addiu $sp, $sp, -0x10
    goto label_0x128300;                                        // 0x001282f4: j 0x128300
    sp = sp + 0x10;                                             // 0x001282f8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001282fc: nop 
label_0x128300:
    sp = sp + -0x20;                                            // 0x00128300: addiu $sp, $sp, -0x20
    s1 = 4;                                                     // 0x00128310: addiu $s1, $zero, 4
    func_00128380();  // 128380                                // 0x0012831c: jal 0x128380
    s2 = 3;                                                     // 0x00128320: addiu $s2, $zero, 3
    if (v0 >= 0) goto label_0x128348;                           // 0x00128324: bgez $v0, 0x128348
    /* nop */                                                   // 0x00128328: nop 
    goto label_0x128368;                                        // 0x0012832c: b 0x128368
    /* nop */                                                   // 0x00128334: nop 
label_0x128338:
    func_0012bbb8();  // 12bbb8                                // 0x00128338: jal 0x12bbb8
    /* nop */                                                   // 0x0012833c: nop 
    func_00128268();  // 128268                                // 0x00128340: jal 0x128268
    /* nop */                                                   // 0x00128344: nop 
label_0x128348:
    func_001287d8();  // 1287d8                                // 0x00128348: jal 0x1287d8
    if (v0 == s2) goto label_0x128360;                          // 0x00128350: beq $v0, $s2, 0x128360
    if (v0 != s1) goto label_0x128338;                          // 0x00128358: bne $v0, $s1, 0x128338
    v1 = -1;                                                    // 0x0012835c: addiu $v1, $zero, -1
label_0x128360:
label_0x128368:
    return;                                                     // 0x00128374: jr $ra
    sp = sp + 0x20;                                             // 0x00128378: addiu $sp, $sp, 0x20
}