void func_001b7790() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b7794: addiu $sp, $sp, -0x20
    v1 = v0 << 5;                                               // 0x001b77a0: sll $v1, $v0, 5
    v0 = 0x30 << 16;                                            // 0x001b77a8: lui $v0, 0x30
    v0 = v0 + 0x7d90;                                           // 0x001b77ac: addiu $v0, $v0, 0x7d90
    s0 = v0 + v1;                                               // 0x001b77b0: addu $s0, $v0, $v1
    *(uint16_t*)(s0) = 0;                                       // 0x001b77b4: sh $zero, 0($s0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001b77b8: lw $v0, 0x14($s0)
    if (v0 == 0) goto label_0x1b77cc;                           // 0x001b77bc: beqz $v0, 0x1b77cc
    /* nop */                                                   // 0x001b77c0: nop 
    /* call function at address in v0 */                        // 0x001b77c4: jalr $v0
    /* nop */                                                   // 0x001b77c8: nop 
label_0x1b77cc:
    func_00107c70();  // 107c70                                // 0x001b77d4: jal 0x107c70
    a2 = 0x20;                                                  // 0x001b77d8: addiu $a2, $zero, 0x20
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b77e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b77e4: jr $ra
    sp = sp + 0x20;                                             // 0x001b77e8: addiu $sp, $sp, 0x20
}