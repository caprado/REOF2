void func_00148530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x00148530: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((a0) + 0x870);                             // 0x00148538: lw $v1, 0x870($a0)
    if (v1 == 0) goto label_0x148570;                           // 0x0014853c: beqz $v1, 0x148570
    /* nop */                                                   // 0x00148540: nop 
    if (a0 == 0) goto label_0x148570;                           // 0x00148544: beqz $a0, 0x148570
    /* nop */                                                   // 0x00148548: nop 
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0014854c: lw $v0, 0xc($a0)
    if (v0 == 0) goto label_0x148570;                           // 0x00148550: beqz $v0, 0x148570
    local_4 = a1;                                               // 0x00148558: sw $a1, 4($sp)
    local_0 = 0;                                                // 0x0014855c: sw $zero, 0($sp)
    func_00147ca0();  // 0x147c28                                // 0x00148560: jal 0x147c28
    goto label_0x14857c;                                        // 0x00148568: b 0x14857c
label_0x148570:
    func_001484f8();  // 0x1484e8                                // 0x00148570: jal 0x1484e8
label_0x14857c:
    return;                                                     // 0x0014857c: jr $ra
    sp = sp + 0x20;                                             // 0x00148580: addiu $sp, $sp, 0x20
}