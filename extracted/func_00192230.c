void func_00192230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00192230: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00192238: addu.qb $zero, $sp, $s1
    s1 = *(int32_t*)((a0) + 8);                                 // 0x00192240: lw $s1, 8($a0)
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00192244: lw $a0, 0xc($s1)
    thunk_func_0018dab0();  // 18dab0                          // 0x00192248: jal 0x18dab0
    a1 = 4;                                                     // 0x0019224c: addiu $a1, $zero, 4
    func_0018db00();  // 18db00                                // 0x00192254: jal 0x18db00
    goto label_0x19227c;                                        // 0x00192260: b 0x19227c
label_0x192268:
    v1 = *(uint8_t*)(a0);                                       // 0x00192268: lbu $v1, 0($a0)
    a1 = a1 + 1;                                                // 0x0019226c: addiu $a1, $a1, 1
    *(uint8_t*)(v0) = v1;                                       // 0x00192270: sb $v1, 0($v0)
    a0 = a0 + 1;                                                // 0x00192274: addiu $a0, $a0, 1
    v0 = v0 + 1;                                                // 0x00192278: addiu $v0, $v0, 1
label_0x19227c:
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x0019227c: lw $v1, 0xc($s1)
    v1 = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x00192280: sltu $v1, $a1, $v1
    if (v1 != 0) goto label_0x192268;                           // 0x00192284: bnez $v1, 0x192268
    /* nop */                                                   // 0x00192288: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00192294: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00192298: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019229c: jr $ra
    sp = sp + 0x30;                                             // 0x001922a0: addiu $sp, $sp, 0x30
}