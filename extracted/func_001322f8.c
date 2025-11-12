void func_001322f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001322f8: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x132340;                           // 0x00132314: bnez $s0, 0x132340
    a0 = 0x22 << 16;                                            // 0x0013231c: lui $a0, 0x22
    a0 = &str_00223908;  // "E8101208 ADXT_SetOutPan: parameter error" // 0x00132328: addiu $a0, $a0, 0x3908
    return func_00127de8();  // Tail call                        // 0x00132334: j 0x127d90
    sp = sp + 0x20;                                             // 0x00132338: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0013233c: nop 
label_0x132340:
    func_0012d678();  // 0x12d610                                // 0x00132340: jal 0x12d610
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00132344: lw $a0, 4($s0)
    a0 = 0x22 << 16;                                            // 0x00132348: lui $a0, 0x22
    v1 = -0x80;                                                 // 0x0013234c: addiu $v1, $zero, -0x80
    a3 = s1 << 1;                                               // 0x00132350: sll $a3, $s1, 1
    v1 = v0 ^ v1;                                               // 0x00132354: xor $v1, $v0, $v1
    a3 = a3 + s0;                                               // 0x00132358: addu $a3, $a3, $s0
    if (v1 == 0) v0 = 0;                                        // 0x0013235c: movz $v0, $zero, $v1
    v0 = v0 + s2;                                               // 0x00132364: addu $v0, $v0, $s2
    *(uint16_t*)((a3) + 0x42) = v0;                             // 0x0013236c: sh $v0, 0x42($a3)
    v0 = *(int8_t*)((s0) + 3);                                  // 0x00132370: lb $v0, 3($s0)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x00132374: slt $v0, $s1, $v0
    if (v0 == 0) goto label_0x132390;                           // 0x00132378: beqz $v0, 0x132390
    a0 = &str_00223938;  // "E02080826 ADXT_GetOutPan: parameter error" // 0x0013237c: addiu $a0, $a0, 0x3938
    func_0012c4e8();  // 0x12c4d0                                // 0x00132380: jal 0x12c4d0
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00132384: lw $a0, 0xc($s0)
    goto label_0x13239c;                                        // 0x00132388: b 0x13239c
label_0x132390:
    func_00127de8();  // 0x127d90                                // 0x00132390: jal 0x127d90
    /* nop */                                                   // 0x00132394: nop 
label_0x13239c:
    return;                                                     // 0x001323a8: jr $ra
    sp = sp + 0x20;                                             // 0x001323ac: addiu $sp, $sp, 0x20
}