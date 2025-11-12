void func_0015fff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0015fff0: addiu $sp, $sp, -0x50
    func_0015fcb0();  // 0x15fc80                                // 0x0015fffc: jal 0x15fc80
    if (v0 != 0) goto label_0x160028;                           // 0x00160008: bnez $v0, 0x160028
    a0 = 0x22 << 16;                                            // 0x00160010: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x00160014: jal 0x163410
    a0 = &str_00227ea8;  // "E1122603 mwSfdGetTime; handle is invalid." // 0x00160018: addiu $a0, $a0, 0x7ea8
    goto label_0x160034;                                        // 0x0016001c: b 0x160034
    /* nop */                                                   // 0x00160024: nop 
label_0x160028:
    func_0015fb60();  // 0x15fb48                                // 0x00160028: jal 0x15fb48
    /* nop */                                                   // 0x0016002c: nop 
    v0 = local_0;                                               // 0x00160030: lw $v0, 0($sp)
label_0x160034:
    return;                                                     // 0x0016003c: jr $ra
    sp = sp + 0x50;                                             // 0x00160040: addiu $sp, $sp, 0x50
}