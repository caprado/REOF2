void func_001d34a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d34a0: addiu $sp, $sp, -0x20
    a0 = a0 & 0xffff;                                           // 0x001d34b0: andi $a0, $a0, 0xffff
    if (a0 == 0) goto label_0x1d34c8;                           // 0x001d34b4: beqz $a0, 0x1d34c8
    v1 = 0xffff << 16;                                          // 0x001d34b8: lui $v1, 0xffff
    func_0019d2e0();  // 0x19d180                                // 0x001d34bc: jal 0x19d180
    /* nop */                                                   // 0x001d34c0: nop 
    v1 = 0xffff << 16;                                          // 0x001d34c4: lui $v1, 0xffff
label_0x1d34c8:
    v1 = s0 & v1;                                               // 0x001d34c8: and $v1, $s0, $v1
    a0 = (unsigned)v1 >> 0x10;                                  // 0x001d34cc: srl $a0, $v1, 0x10
    if (a0 == 0) goto label_0x1d34e0;                           // 0x001d34d0: beqz $a0, 0x1d34e0
    /* nop */                                                   // 0x001d34d4: nop 
    thunk_func_0019d450();  // 0x19d2e0                          // 0x001d34d8: jal 0x19d2e0
    /* nop */                                                   // 0x001d34dc: nop 
label_0x1d34e0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d34e4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d34e8: jr $ra
    sp = sp + 0x20;                                             // 0x001d34ec: addiu $sp, $sp, 0x20
}