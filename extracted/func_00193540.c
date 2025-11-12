void func_00193540() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00193540: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019354c: addu.qb $zero, $sp, $s1
    if (s0 == 0) goto label_0x193568;                           // 0x0019355c: beqz $s0, 0x193568
    *(uint32_t*)((s1) + 0xc8) = s0;                             // 0x00193564: sw $s0, 0xc8($s1)
label_0x193568:
    a1 = *(int16_t*)((s1) + 0x182);                             // 0x00193568: lh $a1, 0x182($s1)
    v1 = -1;                                                    // 0x0019356c: addiu $v1, $zero, -1
    if (a1 == v1) goto label_0x1935a4;                          // 0x00193570: beq $a1, $v1, 0x1935a4
    /* nop */                                                   // 0x00193574: nop 
    v0 = a1 << 2;                                               // 0x00193578: sll $v0, $a1, 2
    v1 = v0 + a1;                                               // 0x00193580: addu $v1, $v0, $a1
    v0 = v1 << 2;                                               // 0x00193584: sll $v0, $v1, 2
    v0 = v1 + v0;                                               // 0x00193588: addu $v0, $v1, $v0
    v0 = v0 << 4;                                               // 0x0019358c: sll $v0, $v0, 4
    v0 = s2 + v0;                                               // 0x00193590: addu $v0, $s2, $v0
    *(uint32_t*)((s1) + 0xd0) = v0;                             // 0x00193594: sw $v0, 0xd0($s1)
    a1 = *(int32_t*)((s1) + 0xd0);                              // 0x00193598: lw $a1, 0xd0($s1)
    func_00193600();  // 0x193540                                // 0x0019359c: jal 0x193540
label_0x1935a4:
    a0 = *(int16_t*)((s1) + 0x180);                             // 0x001935a4: lh $a0, 0x180($s1)
    v1 = -1;                                                    // 0x001935a8: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1935e0;                          // 0x001935ac: beq $a0, $v1, 0x1935e0
    /* nop */                                                   // 0x001935b0: nop 
    v0 = a0 << 2;                                               // 0x001935b4: sll $v0, $a0, 2
    v1 = v0 + a0;                                               // 0x001935bc: addu $v1, $v0, $a0
    v0 = v1 << 2;                                               // 0x001935c0: sll $v0, $v1, 2
    v0 = v1 + v0;                                               // 0x001935c4: addu $v0, $v1, $v0
    v0 = v0 << 4;                                               // 0x001935c8: sll $v0, $v0, 4
    v0 = s2 + v0;                                               // 0x001935cc: addu $v0, $s2, $v0
    *(uint32_t*)((s1) + 0xcc) = v0;                             // 0x001935d0: sw $v0, 0xcc($s1)
    a1 = *(int32_t*)((s1) + 0xcc);                              // 0x001935d4: lw $a1, 0xcc($s1)
    func_00193600();  // 0x193540                                // 0x001935d8: jal 0x193540
label_0x1935e0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001935e4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001935e8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001935ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001935f0: jr $ra
    sp = sp + 0x40;                                             // 0x001935f4: addiu $sp, $sp, 0x40
}