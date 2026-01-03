void func_00192690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00192690: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019269c: addu.qb $zero, $sp, $s1
label_0x1926b0:
    v0 = *(int16_t*)((s1) + 0xc4);                              // 0x001926b0: lh $v0, 0xc4($s1)
    a1 = s1 + 0x80;                                             // 0x001926b4: addiu $a1, $s1, 0x80
    v0 = v0 << 6;                                               // 0x001926bc: sll $v0, $v0, 6
    func_00191030();  // 191030                                // 0x001926c0: jal 0x191030
    a0 = s2 + v0;                                               // 0x001926c4: addu $a0, $s2, $v0
    v1 = *(int32_t*)((s1) + 0xd0);                              // 0x001926c8: lw $v1, 0xd0($s1)
    if (v1 == 0) goto label_0x1926dc;                           // 0x001926cc: beqz $v1, 0x1926dc
    /* nop */                                                   // 0x001926d0: nop 
    goto label_0x1926b0;                                        // 0x001926d4: b 0x1926b0
label_0x1926dc:
    v1 = *(int32_t*)((s1) + 0xcc);                              // 0x001926dc: lw $v1, 0xcc($s1)
    if (v1 == 0) goto label_0x192708;                           // 0x001926e0: beqz $v1, 0x192708
    /* nop */                                                   // 0x001926e4: nop 
    goto label_0x1926b0;                                        // 0x001926e8: b 0x1926b0
label_0x1926f0:
    v1 = *(int32_t*)((s1) + 0xcc);                              // 0x001926f0: lw $v1, 0xcc($s1)
    if (v1 == 0) goto label_0x192704;                           // 0x001926f4: beqz $v1, 0x192704
    /* nop */                                                   // 0x001926f8: nop 
    goto label_0x1926b0;                                        // 0x001926fc: b 0x1926b0
label_0x192704:
    s1 = *(int32_t*)((s1) + 0xc8);                              // 0x00192704: lw $s1, 0xc8($s1)
label_0x192708:
    if (s1 != s0) goto label_0x1926f0;                          // 0x00192708: bne $s1, $s0, 0x1926f0
    /* nop */                                                   // 0x0019270c: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00192714: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00192718: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019271c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00192720: jr $ra
    sp = sp + 0x40;                                             // 0x00192724: addiu $sp, $sp, 0x40
}