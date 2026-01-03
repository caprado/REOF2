void func_001d5b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d5b70: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d5b78: addu.qb $zero, $sp, $s1
    if (a2 != 0) goto label_0x1d5bd8;                           // 0x001d5b84: bnez $a2, 0x1d5bd8
    a0 = *(int32_t*)(s0);                                       // 0x001d5b8c: lw $a0, 0($s0)
    a1 = *(int32_t*)(s1);                                       // 0x001d5b90: lw $a1, 0($s1)
    func_00107ab8();  // 107ab8                                // 0x001d5b94: jal 0x107ab8
    a2 = 0x200;                                                 // 0x001d5b98: addiu $a2, $zero, 0x200
    v0 = *(uint8_t*)((s1) + 0x81c);                             // 0x001d5b9c: lbu $v0, 0x81c($s1)
    if (v0 != 0) goto label_0x1d5bbc;                           // 0x001d5ba0: bnez $v0, 0x1d5bbc
    a0 = s0 + 8;                                                // 0x001d5ba4: addiu $a0, $s0, 8
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001d5ba8: lw $a0, 4($s0)
    a1 = *(int32_t*)((s1) + 4);                                 // 0x001d5bac: lw $a1, 4($s1)
    func_00107ab8();  // 107ab8                                // 0x001d5bb0: jal 0x107ab8
    a2 = 0x200;                                                 // 0x001d5bb4: addiu $a2, $zero, 0x200
    a0 = s0 + 8;                                                // 0x001d5bb8: addiu $a0, $s0, 8
label_0x1d5bbc:
    a1 = s1 + 8;                                                // 0x001d5bbc: addiu $a1, $s1, 8
    func_00107ab8();  // 107ab8                                // 0x001d5bc0: jal 0x107ab8
    a2 = 0x800;                                                 // 0x001d5bc4: addiu $a2, $zero, 0x800
    a0 = *(int32_t*)((s0) + 0x818);                             // 0x001d5bc8: lw $a0, 0x818($s0)
    a1 = *(int32_t*)((s1) + 0x818);                             // 0x001d5bcc: lw $a1, 0x818($s1)
    func_00107ab8();  // 107ab8                                // 0x001d5bd0: jal 0x107ab8
    a2 = 0x840;                                                 // 0x001d5bd4: addiu $a2, $zero, 0x840
label_0x1d5bd8:
    a0 = *(int32_t*)((s0) + 0x808);                             // 0x001d5bd8: lw $a0, 0x808($s0)
    a1 = *(int32_t*)((s1) + 0x808);                             // 0x001d5bdc: lw $a1, 0x808($s1)
    func_00107ab8();  // 107ab8                                // 0x001d5be0: jal 0x107ab8
    a2 = 0x1300;                                                // 0x001d5be4: addiu $a2, $zero, 0x1300
    v1 = *(int32_t*)((s1) + 0x80c);                             // 0x001d5be8: lw $v1, 0x80c($s1)
    *(uint32_t*)((s0) + 0x80c) = v1;                            // 0x001d5bec: sw $v1, 0x80c($s0)
    v1 = *(uint16_t*)((s1) + 0x810);                            // 0x001d5bf0: lhu $v1, 0x810($s1)
    *(uint16_t*)((s0) + 0x810) = v1;                            // 0x001d5bf4: sh $v1, 0x810($s0)
    v1 = *(uint16_t*)((s1) + 0x812);                            // 0x001d5bf8: lhu $v1, 0x812($s1)
    *(uint16_t*)((s0) + 0x812) = v1;                            // 0x001d5bfc: sh $v1, 0x812($s0)
    v1 = *(uint16_t*)((s1) + 0x814);                            // 0x001d5c00: lhu $v1, 0x814($s1)
    *(uint16_t*)((s0) + 0x814) = v1;                            // 0x001d5c04: sh $v1, 0x814($s0)
    v1 = *(uint16_t*)((s1) + 0x816);                            // 0x001d5c08: lhu $v1, 0x816($s1)
    *(uint16_t*)((s0) + 0x816) = v1;                            // 0x001d5c0c: sh $v1, 0x816($s0)
    v1 = *(uint8_t*)((s1) + 0x81c);                             // 0x001d5c10: lbu $v1, 0x81c($s1)
    *(uint8_t*)((s0) + 0x81c) = v1;                             // 0x001d5c14: sb $v1, 0x81c($s0)
    *(uint32_t*)((s1) + 0x80c) = 0;                             // 0x001d5c18: sw $zero, 0x80c($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d5c20: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d5c24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d5c28: jr $ra
    sp = sp + 0x30;                                             // 0x001d5c2c: addiu $sp, $sp, 0x30
}