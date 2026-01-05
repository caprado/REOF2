void func_00140648() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00140648: addiu $sp, $sp, -0x20
    a0 = *(int32_t*)(s0);                                       // 0x00140664: lw $a0, 0($s0)
    func_00107c70();  // 107c70                                // 0x00140668: jal 0x107c70
    a2 = *(int32_t*)((s0) + 4);                                 // 0x0014066c: lw $a2, 4($s0)
    a0 = *(int32_t*)(s0);                                       // 0x00140670: lw $a0, 0($s0)
    func_0010b2a0();  // 10b2a0                                // 0x00140678: jal 0x10b2a0
    a2 = 7;                                                     // 0x0014067c: addiu $a2, $zero, 7
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00140680: lw $a0, 4($s0)
    a1 = *(int32_t*)(s0);                                       // 0x00140684: lw $a1, 0($s0)
    a0 = a0 + -0x10;                                            // 0x0014068c: addiu $a0, $a0, -0x10
    a1 = a1 + 8;                                                // 0x00140694: addiu $a1, $a1, 8
    return func_00140500();  // Tail call                       // 0x0014069c: j 0x140500
    sp = sp + 0x20;                                             // 0x001406a0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001406a4: nop 
    sp = sp + -0x10;                                            // 0x001406a8: addiu $sp, $sp, -0x10
    v0 = a0 + 0x10;                                             // 0x001406ac: addiu $v0, $a0, 0x10
    *(uint32_t*)(s0) = v0;                                      // 0x001406b8: sw $v0, 0($s0)
    func_00140598();  // 140598                                // 0x001406c0: jal 0x140598
    a0 = a0 + 8;                                                // 0x001406c4: addiu $a0, $a0, 8
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001406c8: sw $v0, 4($s0)
    return;                                                     // 0x001406d4: jr $ra
    sp = sp + 0x10;                                             // 0x001406d8: addiu $sp, $sp, 0x10
}