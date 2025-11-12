void func_001a27b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a27b0: addiu $sp, $sp, -0x20
    func_001a2930();  // 0x1a28d0                                // 0x001a27c0: jal 0x1a28d0
    if (v0 == 0) goto label_0x1a27ec;                           // 0x001a27c8: beqz $v0, 0x1a27ec
    /* nop */                                                   // 0x001a27cc: nop 
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a27d0: lw $v1, 4($v0)
    at = ((unsigned)s0 < (unsigned)v1) ? 1 : 0;                 // 0x001a27d4: sltu $at, $s0, $v1
    if (at == 0) goto label_0x1a27ec;                           // 0x001a27d8: beqz $at, 0x1a27ec
    v1 = s0 << 2;                                               // 0x001a27dc: sll $v1, $s0, 2
    v0 = v1 + v0;                                               // 0x001a27e0: addu $v0, $v1, $v0
    goto label_0x1a27f0;                                        // 0x001a27e4: b 0x1a27f0
    v0 = *(int32_t*)((v0) + 0xc);                               // 0x001a27e8: lw $v0, 0xc($v0)
label_0x1a27ec:
    v0 = -1;                                                    // 0x001a27ec: addiu $v0, $zero, -1
label_0x1a27f0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a27f4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a27f8: jr $ra
    sp = sp + 0x20;                                             // 0x001a27fc: addiu $sp, $sp, 0x20
}