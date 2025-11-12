void func_0012f7d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012f7d8: addiu $sp, $sp, -0x10
    *(uint32_t*)((s0) + 0x44) = a1;                             // 0x0012f7e8: sw $a1, 0x44($s0)
    v0 = *(int32_t*)((s0) + 0x80);                              // 0x0012f7ec: lw $v0, 0x80($s0)
    if (v0 == 0) goto label_0x12f800;                           // 0x0012f7f0: beqz $v0, 0x12f800
    func_0012e018();  // 0x12dfe0                                // 0x0012f7f8: jal 0x12dfe0
    /* nop */                                                   // 0x0012f7fc: nop 
label_0x12f800:
    func_0012dfe0();  // 0x12df40                                // 0x0012f800: jal 0x12df40
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x0012f804: lw $a0, 0x44($s0)
    v1 = *(int32_t*)((s0) + 0x84);                              // 0x0012f808: lw $v1, 0x84($s0)
    *(uint32_t*)((s0) + 0x80) = v0;                             // 0x0012f80c: sw $v0, 0x80($s0)
    if (v1 == 0) goto label_0x12f820;                           // 0x0012f810: beqz $v1, 0x12f820
    func_0012e018();  // 0x12dfe0                                // 0x0012f818: jal 0x12dfe0
    /* nop */                                                   // 0x0012f81c: nop 
label_0x12f820:
    func_0012dfe0();  // 0x12df40                                // 0x0012f820: jal 0x12df40
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x0012f824: lw $a0, 0x44($s0)
    *(uint32_t*)((s0) + 0x84) = v0;                             // 0x0012f828: sw $v0, 0x84($s0)
    return;                                                     // 0x0012f834: jr $ra
    sp = sp + 0x10;                                             // 0x0012f838: addiu $sp, $sp, 0x10
}