void func_00165970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00165970: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((s1) + 0x1b74);                            // 0x0016598c: lw $v1, 0x1b74($s1)
    s0 = *(int32_t*)(v1);                                       // 0x00165990: lw $s0, 0($v1)
    if (s0 == 0) goto label_0x165a28;                           // 0x00165994: beqz $s0, 0x165a28
    s2 = *(int32_t*)((v1) + 4);                                 // 0x00165998: lw $s2, 4($v1)
    v0 = 0x26 << 16;                                            // 0x0016599c: lui $v0, 0x26
    a3 = v0 + 0x1ed0;                                           // 0x001659a0: addiu $a3, $v0, 0x1ed0
    a0 = *(int32_t*)((v1) + 0x20);                              // 0x001659d4: lw $a0, 0x20($v1)
    func_001738d0();  // 0x1738c0                                // 0x001659d8: jal 0x1738c0
    g_00261ee8 = a0;  // Global at 0x00261ee8                   // 0x001659dc: sw $a0, 0x18($a3)
    v1 = 1;                                                     // 0x001659e0: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x165a00;                          // 0x001659e4: beq $v0, $v1, 0x165a00
    func_00165a60();  // 0x165a40                                // 0x001659ec: jal 0x165a40
    goto label_0x165a14;                                        // 0x001659f4: b 0x165a14
    /* nop */                                                   // 0x001659fc: nop 
label_0x165a00:
    func_00165ac0();  // 0x165a98                                // 0x00165a00: jal 0x165a98
    /* nop */                                                   // 0x00165a04: nop 
    func_00165a78();  // 0x165a60                                // 0x00165a08: jal 0x165a60
label_0x165a14:
    v1 = *(int32_t*)(s2);                                       // 0x00165a14: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x00165a18: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00165a1c: jalr $v0
label_0x165a28:
    return;                                                     // 0x00165a38: jr $ra
    sp = sp + 0x20;                                             // 0x00165a3c: addiu $sp, $sp, 0x20
}