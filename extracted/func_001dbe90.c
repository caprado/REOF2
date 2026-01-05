void func_001dbe90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x001dbe90: addiu $sp, $sp, -0x30
    a0 = 0x33 << 16;                                            // 0x001dbea0: lui $a0, 0x33
    func_001dc4f0();  // 1dc4f0                                // 0x001dbea4: jal 0x1dc4f0
    a0 = a0 + -0x290;                                           // 0x001dbea8: addiu $a0, $a0, -0x290
    local_2c = v0;                                              // 0x001dbeac: sw $v0, 0x2c($sp)
    v0 = local_2c;                                              // 0x001dbeb0: lw $v0, 0x2c($sp)
    if (v0 == 0) goto label_0x1dbec8;                           // 0x001dbeb4: beqz $v0, 0x1dbec8
    *(uint8_t*)(s0) = 0;                                        // 0x001dbebc: sb $zero, 0($s0)
    goto label_0x1dbf18;                                        // 0x001dbec0: b 0x1dbf18
label_0x1dbec8:
    func_001dca18();  // 1dca18                                // 0x001dbec8: jal 0x1dca18
    a1 = sp + 0x2c;                                             // 0x001dbecc: addiu $a1, $sp, 0x2c
    *(uint32_t*)((gp) + -0x6214) = v0;                          // 0x001dbed0: sw $v0, -0x6214($gp)
    v0 = *(int32_t*)((gp) + -0x6214);                           // 0x001dbed4: lw $v0, -0x6214($gp)
    if (v0 != 0) goto label_0x1dbf14;                           // 0x001dbed8: bnez $v0, 0x1dbf14
    /* nop */                                                   // 0x001dbedc: nop 
    v0 = local_2c;                                              // 0x001dbee0: lw $v0, 0x2c($sp)
    if (v0 != 0) goto label_0x1dbf18;                           // 0x001dbee4: bnez $v0, 0x1dbf18
    v0 = 1;                                                     // 0x001dbee8: addiu $v0, $zero, 1
    at = 0x33 << 16;                                            // 0x001dbeec: lui $at, 0x33
    v0 = g_0032fd74;  // Global at 0x0032fd74                   // 0x001dbef0: lw $v0, -0x28c($at)
    if (v0 != 0) goto label_0x1dbf08;                           // 0x001dbef4: bnez $v0, 0x1dbf08
    /* nop */                                                   // 0x001dbef8: nop 
    *(uint8_t*)(s0) = 0;                                        // 0x001dbefc: sb $zero, 0($s0)
    goto label_0x1dbf18;                                        // 0x001dbf00: b 0x1dbf18
label_0x1dbf08:
    v0 = *(int8_t*)(s0);                                        // 0x001dbf08: lb $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001dbf0c: addiu $v0, $v0, 1
    *(uint8_t*)(s0) = v0;                                       // 0x001dbf10: sb $v0, 0($s0)
label_0x1dbf14:
    v0 = 1;                                                     // 0x001dbf14: addiu $v0, $zero, 1
label_0x1dbf18:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbf1c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbf20: jr $ra
    sp = sp + 0x30;                                             // 0x001dbf24: addiu $sp, $sp, 0x30
}