void func_001653d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001653d0: addiu $sp, $sp, -0x20
    a1 = 0x1b;                                                  // 0x001653d4: addiu $a1, $zero, 0x1b
    s1 = *(int32_t*)((a0) + 0x1b74);                            // 0x001653e4: lw $s1, 0x1b74($a0)
    func_001752e8();  // 1752e8                                // 0x001653e8: jal 0x1752e8
    s0 = *(int32_t*)(s1);                                       // 0x001653ec: lw $s0, 0($s1)
    v0 = *(int32_t*)((s1) + 0x44);                              // 0x001653f4: lw $v0, 0x44($s1)
    if (v0 == v1) goto label_0x165420;                          // 0x001653fc: beq $v0, $v1, 0x165420
    *(uint32_t*)((s1) + 0x44) = v1;                             // 0x00165404: sw $v1, 0x44($s1)
    return func_001325a8();  // Tail call                        // 0x00165414: j 0x132578
    sp = sp + 0x20;                                             // 0x00165418: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016541c: nop 
label_0x165420:
    return;                                                     // 0x0016542c: jr $ra
    sp = sp + 0x20;                                             // 0x00165430: addiu $sp, $sp, 0x20
}