void func_00174988() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00174988: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((v1) + 0xdac);                             // 0x0017499c: lw $v0, 0xdac($v1)
    if (v0 == 0) goto label_0x1749b8;                           // 0x001749a0: beqz $v0, 0x1749b8
    return func_001749d8();  // Tail call                       // 0x001749b0: j 0x1749d8
    sp = sp + 0x10;                                             // 0x001749b4: addiu $sp, $sp, 0x10
label_0x1749b8:
    func_0015b7b0();  // 0x15b740                                // 0x001749b8: jal 0x15b740
    a0 = *(int32_t*)((v1) + 0xd94);                             // 0x001749bc: lw $a0, 0xd94($v1)
    *(uint32_t*)(s0) = v0;                                      // 0x001749c0: sw $v0, 0($s0)
    return;                                                     // 0x001749cc: jr $ra
    sp = sp + 0x10;                                             // 0x001749d0: addiu $sp, $sp, 0x10
}