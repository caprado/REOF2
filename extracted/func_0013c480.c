void func_0013c480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013c480: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x0013c484: lui $a0, 0x20
    a0 = a0 + 0x4490;                                           // 0x0013c490: addiu $a0, $a0, 0x4490
    a2 = 0x10;                                                  // 0x0013c494: addiu $a2, $zero, 0x10
    return func_00107d30();  // Tail call                        // 0x0013c49c: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013c4a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013c4a4: nop 
    sp = sp + -0x10;                                            // 0x0013c4b0: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x0013c4b4: lui $v0, 0x20
    a3 = v0 + 0x4490;                                           // 0x0013c4bc: addiu $a3, $v0, 0x4490
    *(uint32_t*)(v1) = 0;                                       // 0x0013c4c0: sw $zero, 0($v1)
    *(uint32_t*)((v1) + 4) = 0;                                 // 0x0013c4c8: sw $zero, 4($v1)
    v0 = g_00204490;  // Global at 0x00204490                   // 0x0013c4cc: lw $v0, 0($a3)
    if (v0 == 0) goto label_0x13c4e8;                           // 0x0013c4d0: beqz $v0, 0x13c4e8
    a3 = g_00204494;  // Global at 0x00204494                   // 0x0013c4d8: lw $a3, 4($a3)
    return func_0013c480();  // Tail call                        // 0x0013c4e0: j 0x13c3b8
    sp = sp + 0x10;                                             // 0x0013c4e4: addiu $sp, $sp, 0x10
label_0x13c4e8:
    return;                                                     // 0x0013c4ec: jr $ra
    sp = sp + 0x10;                                             // 0x0013c4f0: addiu $sp, $sp, 0x10
}