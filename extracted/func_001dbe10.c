void func_001dbe10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x001dbe10: addiu $sp, $sp, -0x30
    v0 = *(int8_t*)((gp) + -0x6220);                            // 0x001dbe1c: lb $v0, -0x6220($gp)
    if (v0 != 0) goto label_0x1dbe74;                           // 0x001dbe20: bnez $v0, 0x1dbe74
    func_001dc428();  // 0x1dc230                                // 0x001dbe28: jal 0x1dc230
    a0 = sp + 0x2c;                                             // 0x001dbe2c: addiu $a0, $sp, 0x2c
    if (v0 == 0) goto label_0x1dbe44;                           // 0x001dbe30: beqz $v0, 0x1dbe44
    /* nop */                                                   // 0x001dbe34: nop 
    *(uint8_t*)(s0) = 0;                                        // 0x001dbe38: sb $zero, 0($s0)
    goto label_0x1dbe7c;                                        // 0x001dbe3c: b 0x1dbe7c
label_0x1dbe44:
    v0 = local_2c;                                              // 0x001dbe44: lw $v0, 0x2c($sp)
    if (v0 != 0) goto label_0x1dbe5c;                           // 0x001dbe48: bnez $v0, 0x1dbe5c
    v0 = 1;                                                     // 0x001dbe4c: addiu $v0, $zero, 1
    *(uint8_t*)(s0) = 0;                                        // 0x001dbe50: sb $zero, 0($s0)
    goto label_0x1dbe7c;                                        // 0x001dbe54: b 0x1dbe7c
label_0x1dbe5c:
    *(uint32_t*)((gp) + -0x6214) = 0;                           // 0x001dbe5c: sw $zero, -0x6214($gp)
    *(uint8_t*)((gp) + -0x6220) = v0;                           // 0x001dbe60: sb $v0, -0x6220($gp)
    v1 = *(int8_t*)(s0);                                        // 0x001dbe64: lb $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001dbe68: addiu $v1, $v1, 1
    goto label_0x1dbe7c;                                        // 0x001dbe6c: b 0x1dbe7c
    *(uint8_t*)(s0) = v1;                                       // 0x001dbe70: sb $v1, 0($s0)
label_0x1dbe74:
    *(uint8_t*)(s0) = 0;                                        // 0x001dbe74: sb $zero, 0($s0)
label_0x1dbe7c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbe80: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbe84: jr $ra
    sp = sp + 0x30;                                             // 0x001dbe88: addiu $sp, $sp, 0x30
}