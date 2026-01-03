void func_001d3390() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 1 << 16;                                               // 0x001d3390: lui $v0, 1
    sp = sp + -0x10;                                            // 0x001d3394: addiu $sp, $sp, -0x10
    v0 = a2 & v0;                                               // 0x001d3398: and $v0, $a2, $v0
    if (v0 == 0) goto label_0x1d33b4;                           // 0x001d339c: beqz $v0, 0x1d33b4
    func_001a9b30();  // 1a9b30                                // 0x001d33a4: jal 0x1a9b30
    /* nop */                                                   // 0x001d33a8: nop 
    goto label_0x1d33d4;                                        // 0x001d33ac: b 0x1d33d4
label_0x1d33b4:
    v0 = a2 & 0xffff;                                           // 0x001d33b4: andi $v0, $a2, 0xffff
    if (v0 != 0) goto label_0x1d33c8;                           // 0x001d33b8: bnez $v0, 0x1d33c8
    goto label_0x1d33d0;                                        // 0x001d33c0: b 0x1d33d0
    /* nop */                                                   // 0x001d33c4: nop 
label_0x1d33c8:
    func_001a9bd0();  // 1a9bd0                                // 0x001d33c8: jal 0x1a9bd0
    /* nop */                                                   // 0x001d33cc: nop 
label_0x1d33d0:
label_0x1d33d4:
    return;                                                     // 0x001d33d4: jr $ra
    sp = sp + 0x10;                                             // 0x001d33d8: addiu $sp, $sp, 0x10
}