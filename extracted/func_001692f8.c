void func_001692f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x001692f8: addiu $sp, $sp, -0x30
    v0 = (s1 < s0) ? 1 : 0;                                     // 0x0016930c: slt $v0, $s1, $s0
    if (v0 != 0) goto label_0x169354;                           // 0x00169318: bnez $v0, 0x169354
    a1 = s0 & 0xff;                                             // 0x00169320: andi $a1, $s0, 0xff
    /* nop */                                                   // 0x00169324: nop 
label_0x169328:
    func_001790b8();  // 1790b8                                // 0x0016932c: jal 0x1790b8
    if (v0 == 0) goto label_0x169344;                           // 0x00169334: beqz $v0, 0x169344
    v1 = local_0;                                               // 0x00169338: lw $v1, 0($sp)
    if (v1 != 0) goto label_0x169358;                           // 0x0016933c: bnez $v1, 0x169358
label_0x169344:
    s0 = s0 + 1;                                                // 0x00169344: addiu $s0, $s0, 1
    v0 = (s1 < s0) ? 1 : 0;                                     // 0x00169348: slt $v0, $s1, $s0
    if (v0 == 0) goto label_0x169328;                           // 0x0016934c: beqz $v0, 0x169328
    a1 = s0 & 0xff;                                             // 0x00169350: andi $a1, $s0, 0xff
label_0x169354:
label_0x169358:
    return;                                                     // 0x00169368: jr $ra
    sp = sp + 0x30;                                             // 0x0016936c: addiu $sp, $sp, 0x30
}