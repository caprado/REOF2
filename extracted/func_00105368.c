void func_00105368() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00105368: addiu $sp, $sp, -0x20
    s0 = s2 << 1;                                               // 0x00105378: sll $s0, $s2, 1
    s0 = s0 + s2;                                               // 0x0010537c: addu $s0, $s0, $s2
    s0 = s0 << 2;                                               // 0x00105384: sll $s0, $s0, 2
    s0 = s0 - s2;                                               // 0x0010538c: subu $s0, $s0, $s2
    s0 = s0 << 3;                                               // 0x00105390: sll $s0, $s0, 3
    func_001071e0();  // 1071e0                                // 0x00105394: jal 0x1071e0
    a1 = s0 + 0xc;                                              // 0x00105398: addiu $a1, $s0, 0xc
    v1 = s1 + 0xc;                                              // 0x001053a8: addiu $v1, $s1, 0xc
    if (s1 == 0) goto label_0x1053c8;                           // 0x001053ac: beqz $s1, 0x1053c8
    *(uint32_t*)((s1) + 4) = s2;                                // 0x001053b4: sw $s2, 4($s1)
    *(uint32_t*)(s1) = 0;                                       // 0x001053b8: sw $zero, 0($s1)
    func_00107c70();  // 107c70                                // 0x001053bc: jal 0x107c70
    *(uint32_t*)((s1) + 8) = v1;                                // 0x001053c0: sw $v1, 8($s1)
label_0x1053c8:
    return;                                                     // 0x001053d8: jr $ra
    sp = sp + 0x20;                                             // 0x001053dc: addiu $sp, $sp, 0x20
}