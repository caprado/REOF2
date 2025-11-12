void func_0015f5a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f5a0: addiu $sp, $sp, -0x10
    func_0015f6d8();  // 0x15f690                                // 0x0015f5a8: jal 0x15f690
    a0 = 8;                                                     // 0x0015f5ac: addiu $a0, $zero, 8
    a0 = 9;                                                     // 0x0015f5b4: addiu $a0, $zero, 9
    return func_0015f6d8();  // Tail call                        // 0x0015f5b8: j 0x15f690
    sp = sp + 0x10;                                             // 0x0015f5bc: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0015f5c0: addiu $sp, $sp, -0x20
    a0 = 8;                                                     // 0x0015f5d4: addiu $a0, $zero, 8
    func_001030a8();  // 0x103080                                // 0x0015f5e0: jal 0x103080
    a0 = s0 + 0xf;                                              // 0x0015f5e8: addiu $a0, $s0, 0xf
    v1 = (s0 < 0) ? 1 : 0;                                      // 0x0015f5ec: slti $v1, $s0, 0
    *(uint32_t*)((v0) + 0x80) = s1;                             // 0x0015f5f0: sw $s1, 0x80($v0)
    if (v1 != 0) s0 = a0;                                       // 0x0015f5f4: movn $s0, $a0, $v1
    func_001035d0();  // 0x103550                                // 0x0015f600: jal 0x103550
    a2 = s0 >> 4;                                               // 0x0015f604: sra $a2, $s0, 4
    return;                                                     // 0x0015f61c: jr $ra
    sp = sp + 0x20;                                             // 0x0015f620: addiu $sp, $sp, 0x20
}