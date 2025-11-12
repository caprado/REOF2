void func_0018bf30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0018bf30: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018bf38: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((a0) + 0x20);                              // 0x0018bf44: lw $s0, 0x20($a0)
    func_0018db10();  // 0x18db00                                // 0x0018bf48: jal 0x18db00
    a0 = *(int32_t*)((a0) + 0x1c);                              // 0x0018bf4c: lw $a0, 0x1c($a0)
    *(uint32_t*)((s1) + 0x20) = v0;                             // 0x0018bf50: sw $v0, 0x20($s1)
    v1 = *(int32_t*)((s1) + 0x2c);                              // 0x0018bf58: lw $v1, 0x2c($s1)
    a2 = 0x1000 << 16;                                          // 0x0018bf5c: lui $a2, 0x1000
    a1 = *(int32_t*)((s1) + 0x24);                              // 0x0018bf60: lw $a1, 0x24($s1)
    a3 = 0x2000 << 16;                                          // 0x0018bf64: lui $a3, 0x2000
    t1 = 0x7000 << 16;                                          // 0x0018bf68: lui $t1, 0x7000
    t0 = 0x6000 << 16;                                          // 0x0018bf6c: lui $t0, 0x6000
    v1 = v0 + v1;                                               // 0x0018bf70: addu $v1, $v0, $v1
    goto label_0x18c004;                                        // 0x0018bf74: b 0x18c004
    t5 = v0 + a1;                                               // 0x0018bf78: addu $t5, $v0, $a1
label_0x18bf7c:
    a1 = *(int32_t*)(v1);                                       // 0x0018bf7c: lw $a1, 0($v1)
    t4 = v0 + a1;                                               // 0x0018bf80: addu $t4, $v0, $a1
    *(uint32_t*)((t5) + 4) = t4;                                // 0x0018bf84: sw $t4, 4($t5)
    a1 = *(uint16_t*)(t5);                                      // 0x0018bf8c: lhu $a1, 0($t5)
    a1 = a1 + 1;                                                // 0x0018bf90: addiu $a1, $a1, 1
    a1 = a1 << 4;                                               // 0x0018bf94: sll $a1, $a1, 4
    t5 = t5 + a1;                                               // 0x0018bf98: addu $t5, $t5, $a1
label_0x18bf9c:
    t3 = *(int32_t*)(t2);                                       // 0x0018bf9c: lw $t3, 0($t2)
    a1 = t3 & t1;                                               // 0x0018bfa0: and $a1, $t3, $t1
    if (a1 == t0) goto label_0x18bff0;                          // 0x0018bfa4: beq $a1, $t0, 0x18bff0
    /* nop */                                                   // 0x0018bfa8: nop 
    if (a1 == a3) goto label_0x18bfd8;                          // 0x0018bfac: beq $a1, $a3, 0x18bfd8
    /* nop */                                                   // 0x0018bfb0: nop 
    if (a1 == a2) goto label_0x18bfc4;                          // 0x0018bfb4: beq $a1, $a2, 0x18bfc4
    /* nop */                                                   // 0x0018bfb8: nop 
    goto label_0x18bff4;                                        // 0x0018bfbc: b 0x18bff4
    /* nop */                                                   // 0x0018bfc0: nop 
label_0x18bfc4:
    a1 = t3 & 0xffff;                                           // 0x0018bfc4: andi $a1, $t3, 0xffff
    a1 = a1 + 1;                                                // 0x0018bfc8: addiu $a1, $a1, 1
    a1 = a1 << 4;                                               // 0x0018bfcc: sll $a1, $a1, 4
    goto label_0x18bff4;                                        // 0x0018bfd0: b 0x18bff4
    t2 = t2 + a1;                                               // 0x0018bfd4: addu $t2, $t2, $a1
label_0x18bfd8:
    a1 = *(int32_t*)((t2) + 4);                                 // 0x0018bfd8: lw $a1, 4($t2)
    a1 = a1 - s0;                                               // 0x0018bfdc: subu $a1, $a1, $s0
    a1 = a1 + v0;                                               // 0x0018bfe0: addu $a1, $a1, $v0
    *(uint32_t*)((t2) + 4) = a1;                                // 0x0018bfe4: sw $a1, 4($t2)
    goto label_0x18bff4;                                        // 0x0018bfe8: b 0x18bff4
label_0x18bff0:
label_0x18bff4:
    if (t4 != 0) goto label_0x18bf9c;                           // 0x0018bff4: bnez $t4, 0x18bf9c
    /* nop */                                                   // 0x0018bff8: nop 
    v1 = v1 + 4;                                                // 0x0018bffc: addiu $v1, $v1, 4
    a0 = a0 + 1;                                                // 0x0018c000: addiu $a0, $a0, 1
label_0x18c004:
    a1 = *(int32_t*)((s1) + 0x34);                              // 0x0018c004: lw $a1, 0x34($s1)
    a1 = ((unsigned)a0 < (unsigned)a1) ? 1 : 0;                 // 0x0018c008: sltu $a1, $a0, $a1
    if (a1 != 0) goto label_0x18bf7c;                           // 0x0018c00c: bnez $a1, 0x18bf7c
    /* nop */                                                   // 0x0018c010: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018c018: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018c01c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018c020: jr $ra
    sp = sp + 0x30;                                             // 0x0018c024: addiu $sp, $sp, 0x30
}