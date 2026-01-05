void func_0016f8b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016f8b0: addiu $sp, $sp, -0x30
    if (a2 <= 0) goto label_0x16f924;                           // 0x0016f8c8: blez $a2, 0x16f924
    s3 = 1;                                                     // 0x0016f8d8: addiu $s3, $zero, 1
    v0 = *(int32_t*)(s2);                                       // 0x0016f8dc: lw $v0, 0($s2)
    s2 = s2 + 4;                                                // 0x0016f8e0: addiu $s2, $s2, 4
    *(uint32_t*)(s0) = 0;                                       // 0x0016f8e4: sw $zero, 0($s0)
    a0 = s0 + 0x2c;                                             // 0x0016f8e8: addiu $a0, $s0, 0x2c
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0016f8ec: sw $v0, 8($s0)
    s1 = s1 + -1;                                               // 0x0016f8f0: addiu $s1, $s1, -1
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0016f8f4: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0016f8f8: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = s3;                             // 0x0016f8fc: sw $s3, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x0016f900: sw $zero, 0x14($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x0016f904: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x0016f908: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0016f90c: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x0016f910: sw $zero, 0x24($s0)
    func_0016f940();  // 16f940                                // 0x0016f914: jal 0x16f940
    s0 = s0 + 0x80;                                             // 0x0016f918: addiu $s0, $s0, 0x80
    /* bnezl $s1, 0x16f8e0 */                                   // 0x0016f91c: bnezl $s1, 0x16f8e0
    v0 = *(int32_t*)(s2);                                       // 0x0016f920: lw $v0, 0($s2)
label_0x16f924:
    return;                                                     // 0x0016f938: jr $ra
    sp = sp + 0x30;                                             // 0x0016f93c: addiu $sp, $sp, 0x30
}