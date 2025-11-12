void func_001742b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001742b0: addiu $sp, $sp, -0x30
    s1 = s0 + 0x8a0;                                            // 0x001742c0: addiu $s1, $s0, 0x8a0
    s2 = s0 + 0xcfc;                                            // 0x001742c8: addiu $s2, $s0, 0xcfc
    s3 = s0 + 0xac4;                                            // 0x001742d0: addiu $s3, $s0, 0xac4
    a0 = s0 + 0xc;                                              // 0x001742d8: addiu $a0, $s0, 0xc
    *(uint32_t*)(s0) = 0;                                       // 0x001742dc: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001742e0: sw $zero, 4($s0)
    func_00168c38();  // 0x168c20                                // 0x001742e4: jal 0x168c20
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001742e8: sw $zero, 8($s0)
    *(uint32_t*)(s1) = 0;                                       // 0x001742ec: sw $zero, 0($s1)
    *(uint32_t*)((s1) + 0x20) = 0;                              // 0x001742f0: sw $zero, 0x20($s1)
    a1 = 0x7fff << 16;                                          // 0x001742f4: lui $a1, 0x7fff
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001742f8: sw $zero, 4($s1)
    a0 = s0 + 0xad0;                                            // 0x001742fc: addiu $a0, $s0, 0xad0
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00174300: sw $zero, 8($s1)
    a1 = a1 | 0xffff;                                           // 0x00174304: ori $a1, $a1, 0xffff
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00174308: sw $zero, 0xc($s1)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x0017430c: sw $zero, 0x10($s1)
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00174310: sw $zero, 0x14($s1)
    *(uint32_t*)((s1) + 0x18) = 0;                              // 0x00174314: sw $zero, 0x18($s1)
    *(uint32_t*)((s1) + 0x1c) = 0;                              // 0x00174318: sw $zero, 0x1c($s1)
    *(uint32_t*)((s3) + 8) = 0;                                 // 0x0017431c: sw $zero, 8($s3)
    *(uint32_t*)(s3) = 0;                                       // 0x00174320: sw $zero, 0($s3)
    func_00175958();  // 0x175910                                // 0x00174324: jal 0x175910
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x00174328: sw $zero, 4($s3)
    *(uint32_t*)(s2) = 0;                                       // 0x0017432c: sw $zero, 0($s2)
    v0 = 1;                                                     // 0x00174330: addiu $v0, $zero, 1
    *(uint32_t*)((s2) + 4) = 0;                                 // 0x00174334: sw $zero, 4($s2)
    *(uint32_t*)((s2) + 8) = v0;                                // 0x00174338: sw $v0, 8($s2)
    *(uint32_t*)((s2) + 0xc) = 0;                               // 0x0017433c: sw $zero, 0xc($s2)
    *(uint32_t*)((s2) + 0x10) = 0;                              // 0x00174340: sw $zero, 0x10($s2)
    *(uint32_t*)((s2) + 0x14) = 0;                              // 0x00174344: sw $zero, 0x14($s2)
    return;                                                     // 0x0017435c: jr $ra
    sp = sp + 0x30;                                             // 0x00174360: addiu $sp, $sp, 0x30
}