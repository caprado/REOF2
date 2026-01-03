void func_001765f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x001765f0: addiu $sp, $sp, -0x30
    a2 = sp + 4;                                                // 0x00176600: addiu $a2, $sp, 4
    func_001760d8();  // 1760d8                                // 0x0017660c: jal 0x1760d8
    s0 = s1 + 0xcc0;                                            // 0x00176610: addiu $s0, $s1, 0xcc0
    v0 = local_0;                                               // 0x00176614: lw $v0, 0($sp)
    v1 = *(int32_t*)((s0) + 0x248);                             // 0x0017661c: lw $v1, 0x248($s0)
    if (v1 != v0) goto label_0x176638;                          // 0x00176620: bne $v1, $v0, 0x176638
    v1 = *(int32_t*)((s0) + 0x24c);                             // 0x00176628: lw $v1, 0x24c($s0)
    v0 = local_4;                                               // 0x0017662c: lw $v0, 4($sp)
    if (v1 == v0) goto label_0x176654;                          // 0x00176630: beq $v1, $v0, 0x176654
    v0 = 1;                                                     // 0x00176634: addiu $v0, $zero, 1
label_0x176638:
    func_00175be0();  // 175be0                                // 0x00176638: jal 0x175be0
    /* nop */                                                   // 0x0017663c: nop 
    v0 = local_0;                                               // 0x00176640: lw $v0, 0($sp)
    v1 = local_4;                                               // 0x00176644: lw $v1, 4($sp)
    *(uint32_t*)((s0) + 0x248) = v0;                            // 0x00176648: sw $v0, 0x248($s0)
    *(uint32_t*)((s0) + 0x24c) = v1;                            // 0x0017664c: sw $v1, 0x24c($s0)
    v0 = 1;                                                     // 0x00176650: addiu $v0, $zero, 1
label_0x176654:
    *(uint32_t*)((s1) + 0x44) = v0;                             // 0x00176658: sw $v0, 0x44($s1)
    return;                                                     // 0x00176664: jr $ra
    sp = sp + 0x30;                                             // 0x00176668: addiu $sp, $sp, 0x30
}