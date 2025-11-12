void func_00171190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171190: addiu $sp, $sp, -0x10
    PollSema();  // 0x114320                                    // 0x001711a0: jal 0x114320
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x001711a4: lw $a0, 0x40($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001711a8: lw $v1, 0x14($s0)
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x001711ac: lw $a0, 0x40($s0)
    v0 = v1 + 0x803;                                            // 0x001711b0: addiu $v0, $v1, 0x803
    v1 = v1 + 0x1002;                                           // 0x001711b4: addiu $v1, $v1, 0x1002
    a1 = (v0 < 0) ? 1 : 0;                                      // 0x001711b8: slti $a1, $v0, 0
    if (a1 != 0) v0 = v1;                                       // 0x001711c0: movn $v0, $v1, $a1
    v0 = v0 >> 0xb;                                             // 0x001711c4: sra $v0, $v0, 0xb
    v0 = v0 << 0xb;                                             // 0x001711c8: sll $v0, $v0, 0xb
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001711cc: sw $v0, 0x14($s0)
    return iSignalSema();  // Tail call                         // 0x001711d4: j 0x114300
    sp = sp + 0x10;                                             // 0x001711d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001711dc: nop 
    v0 = 0x21 << 16;                                            // 0x001711e0: lui $v0, 0x21
    return;                                                     // 0x001711e4: jr $ra
    g_002157c0 = a0;  // Global at 0x002157c0                   // 0x001711e8: sw $a0, 0x57c0($v0)
}