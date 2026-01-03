void func_001d06b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d06b0: addiu $sp, $sp, -0x10
    a0 = 0x33 << 16;                                            // 0x001d06b4: lui $a0, 0x33
    a0 = a0 + -0x2b50;                                          // 0x001d06bc: addiu $a0, $a0, -0x2b50
    a1 = 0xff;                                                  // 0x001d06c0: addiu $a1, $zero, 0xff
    a2 = 0x3d4;                                                 // 0x001d06c4: addiu $a2, $zero, 0x3d4
    func_00107c70();  // 107c70                                // 0x001d06c8: jal 0x107c70
    *(uint32_t*)((gp) + -0x6260) = 0;                           // 0x001d06cc: sw $zero, -0x6260($gp)
    v0 = -1;                                                    // 0x001d06d0: addiu $v0, $zero, -1
    a0 = 0x33 << 16;                                            // 0x001d06d4: lui $a0, 0x33
    *(uint32_t*)((gp) + -0x6264) = v0;                          // 0x001d06d8: sw $v0, -0x6264($gp)
    a0 = a0 + -0x2c50;                                          // 0x001d06dc: addiu $a0, $a0, -0x2c50
    *(uint32_t*)((gp) + -0x6268) = v0;                          // 0x001d06e0: sw $v0, -0x6268($gp)
    a2 = 0x100;                                                 // 0x001d06e8: addiu $a2, $zero, 0x100
    *(uint8_t*)((gp) + -0x626c) = 0;                            // 0x001d06ec: sb $zero, -0x626c($gp)
    func_00107c70();  // 107c70                                // 0x001d06f0: jal 0x107c70
    *(uint8_t*)((gp) + -0x6270) = 0;                            // 0x001d06f4: sb $zero, -0x6270($gp)
    a0 = 0x33 << 16;                                            // 0x001d06f8: lui $a0, 0x33
    a0 = a0 + -0x2d40;                                          // 0x001d0700: addiu $a0, $a0, -0x2d40
    a2 = 0xf0;                                                  // 0x001d0704: addiu $a2, $zero, 0xf0
    *(uint32_t*)((gp) + -0x6274) = 0;                           // 0x001d0708: sw $zero, -0x6274($gp)
    *(uint16_t*)((gp) + -0x6278) = 0;                           // 0x001d070c: sh $zero, -0x6278($gp)
    *(uint8_t*)((gp) + -0x627c) = 0;                            // 0x001d0710: sb $zero, -0x627c($gp)
    func_00107c70();  // 107c70                                // 0x001d0714: jal 0x107c70
    *(uint8_t*)((gp) + -0x6280) = 0;                            // 0x001d0718: sb $zero, -0x6280($gp)
    a0 = 0x33 << 16;                                            // 0x001d071c: lui $a0, 0x33
    a0 = a0 + -0x2d50;                                          // 0x001d0724: addiu $a0, $a0, -0x2d50
    func_00107c70();  // 107c70                                // 0x001d0728: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d072c: addiu $a2, $zero, 0x10
    a0 = 0x33 << 16;                                            // 0x001d0730: lui $a0, 0x33
    a0 = a0 + -0x2e50;                                          // 0x001d0738: addiu $a0, $a0, -0x2e50
    func_00107c70();  // 107c70                                // 0x001d073c: jal 0x107c70
    a2 = 0x100;                                                 // 0x001d0740: addiu $a2, $zero, 0x100
    a0 = 0x33 << 16;                                            // 0x001d0744: lui $a0, 0x33
    a0 = a0 + -0x2f50;                                          // 0x001d074c: addiu $a0, $a0, -0x2f50
    a2 = 0x100;                                                 // 0x001d0750: addiu $a2, $zero, 0x100
    *(uint32_t*)((gp) + -0x6284) = 0;                           // 0x001d0754: sw $zero, -0x6284($gp)
    func_00107c70();  // 107c70                                // 0x001d0758: jal 0x107c70
    *(uint32_t*)((gp) + -0x6288) = 0;                           // 0x001d075c: sw $zero, -0x6288($gp)
    a0 = 0x33 << 16;                                            // 0x001d0760: lui $a0, 0x33
    a0 = a0 + -0x3050;                                          // 0x001d0768: addiu $a0, $a0, -0x3050
    func_00107c70();  // 107c70                                // 0x001d076c: jal 0x107c70
    a2 = 0x100;                                                 // 0x001d0770: addiu $a2, $zero, 0x100
    v0 = -1;                                                    // 0x001d0774: addiu $v0, $zero, -1
    a0 = 0x33 << 16;                                            // 0x001d0778: lui $a0, 0x33
    *(uint32_t*)((gp) + -0x62a4) = v0;                          // 0x001d077c: sw $v0, -0x62a4($gp)
    a0 = a0 + -0x3150;                                          // 0x001d0780: addiu $a0, $a0, -0x3150
    a2 = 0x100;                                                 // 0x001d0788: addiu $a2, $zero, 0x100
    *(uint8_t*)((gp) + -0x628c) = 0;                            // 0x001d078c: sb $zero, -0x628c($gp)
    *(uint8_t*)((gp) + -0x6290) = 0;                            // 0x001d0790: sb $zero, -0x6290($gp)
    *(uint32_t*)((gp) + -0x6294) = 0;                           // 0x001d0794: sw $zero, -0x6294($gp)
    *(uint32_t*)((gp) + -0x6298) = 0;                           // 0x001d0798: sw $zero, -0x6298($gp)
    *(uint32_t*)((gp) + -0x629c) = 0;                           // 0x001d079c: sw $zero, -0x629c($gp)
    func_00107c70();  // 107c70                                // 0x001d07a0: jal 0x107c70
    *(uint32_t*)((gp) + -0x62a0) = 0;                           // 0x001d07a4: sw $zero, -0x62a0($gp)
    return;                                                     // 0x001d07ac: jr $ra
    sp = sp + 0x10;                                             // 0x001d07b0: addiu $sp, $sp, 0x10
}