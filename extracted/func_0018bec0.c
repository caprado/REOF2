void func_0018bec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018bec0: addiu $sp, $sp, -0x20
label_0x18bed0:
    v1 = *(int32_t*)((gp) + -0x64c0);                           // 0x0018bed0: lw $v1, -0x64c0($gp)
    a0 = s0 << 1;                                               // 0x0018bed4: sll $a0, $s0, 1
    a0 = a0 + s0;                                               // 0x0018bed8: addu $a0, $a0, $s0
    a0 = a0 << 7;                                               // 0x0018bedc: sll $a0, $a0, 7
    a0 = v1 + a0;                                               // 0x0018bee0: addu $a0, $v1, $a0
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018bee4: lw $v1, 4($a0)
    if (v1 == 0) goto label_0x18bf04;                           // 0x0018bee8: beqz $v1, 0x18bf04
    /* nop */                                                   // 0x0018beec: nop 
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x0018bef0: lw $v1, 0x1c($a0)
    if (v1 == 0) goto label_0x18bf04;                           // 0x0018bef4: beqz $v1, 0x18bf04
    /* nop */                                                   // 0x0018bef8: nop 
    func_0018c030();  // 0x18bf30                                // 0x0018befc: jal 0x18bf30
    /* nop */                                                   // 0x0018bf00: nop 
label_0x18bf04:
    s0 = s0 + 1;                                                // 0x0018bf04: addiu $s0, $s0, 1
    v1 = (s0 < 0x280) ? 1 : 0;                                  // 0x0018bf08: slti $v1, $s0, 0x280
    if (v1 != 0) goto label_0x18bed0;                           // 0x0018bf0c: bnez $v1, 0x18bed0
    /* nop */                                                   // 0x0018bf10: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018bf18: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018bf1c: jr $ra
    sp = sp + 0x20;                                             // 0x0018bf20: addiu $sp, $sp, 0x20
}