void func_0012ea70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0012ea70: addiu $sp, $sp, -0x50
    v0 = *(int32_t*)((s2) + 0x58);                              // 0x0012eaa0: lw $v0, 0x58($s2)
    if (v0 <= 0) goto label_0x12eb74;                           // 0x0012eaa4: blez $v0, 0x12eb74
    s4 = *(int32_t*)((s2) + 0xc);                               // 0x0012eaa8: lw $s4, 0xc($s2)
    s1 = s2 + 0x2a8;                                            // 0x0012eaac: addiu $s1, $s2, 0x2a8
    s3 = s2 + 0x290;                                            // 0x0012eab0: addiu $s3, $s2, 0x290
    a0 = *(uint16_t*)((s2) + 0x2d0);                            // 0x0012eab4: lhu $a0, 0x2d0($s2)
    a1 = *(uint16_t*)((s2) + 0x2d2);                            // 0x0012eab8: lhu $a1, 0x2d2($s2)
    v1 = *(uint16_t*)(s3);                                      // 0x0012eabc: lhu $v1, 0($s3)
    s3 = s3 + 2;                                                // 0x0012eac0: addiu $s3, $s3, 2
    v0 = *(uint16_t*)((s2) + 0x2d4);                            // 0x0012eac8: lhu $v0, 0x2d4($s2)
    v1 = v1 + -1;                                               // 0x0012eacc: addiu $v1, $v1, -1
    a2 = *(int32_t*)(s1);                                       // 0x0012ead0: lw $a2, 0($s1)
    a0 = a0 ^ v1;                                               // 0x0012ead4: xor $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x0012ead8: sll $a0, $a0, 0x10
    v0 = v0 + a1;                                               // 0x0012eadc: addu $v0, $v0, $a1
    s0 = a0 >> 0x10;                                            // 0x0012eae0: sra $s0, $a0, 0x10
    v0 = v0 & 0x7fff;                                           // 0x0012eae4: andi $v0, $v0, 0x7fff
    if (a2 != 0) goto label_0x12eb10;                           // 0x0012eae8: bnez $a2, 0x12eb10
    *(uint16_t*)((s2) + 0x2d0) = v0;                            // 0x0012eaec: sh $v0, 0x2d0($s2)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0012eaf0: lw $v0, 4($s1)
    if (v0 != 0) goto label_0x12eb14;                           // 0x0012eaf4: bnez $v0, 0x12eb14
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0012eafc: lw $v0, 8($s1)
    if (v0 != 0) goto label_0x12eb18;                           // 0x0012eb00: bnez $v0, 0x12eb18
    a1 = 1;                                                     // 0x0012eb04: addiu $a1, $zero, 1
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x0012eb08: lw $v0, 0xc($s1)
    if (v0 == 0) s0 = 0;                                        // 0x0012eb0c: movz $s0, $zero, $v0
label_0x12eb10:
label_0x12eb14:
    a1 = 1;                                                     // 0x0012eb14: addiu $a1, $zero, 1
label_0x12eb18:
    a2 = 1;                                                     // 0x0012eb18: addiu $a2, $zero, 1
    v0 = s0 >> 8;                                               // 0x0012eb20: sra $v0, $s0, 8
    s5 = s5 + 1;                                                // 0x0012eb24: addiu $s5, $s5, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012eb28: jal 0x12dc10
    local_0 = v0;                                               // 0x0012eb2c: sb $v0, 0($sp)
    a1 = 1;                                                     // 0x0012eb34: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012eb38: addiu $a2, $zero, 1
    func_0012ddd0();  // 0x12dc10                                // 0x0012eb40: jal 0x12dc10
    local_0 = s0;                                               // 0x0012eb44: sb $s0, 0($sp)
    s1 = s1 + 0x10;                                             // 0x0012eb4c: addiu $s1, $s1, 0x10
    a1 = 1;                                                     // 0x0012eb50: addiu $a1, $zero, 1
    a2 = 0x10;                                                  // 0x0012eb54: addiu $a2, $zero, 0x10
    func_0012ddd0();  // 0x12dc10                                // 0x0012eb5c: jal 0x12dc10
    s6 = s6 + 0x12;                                             // 0x0012eb60: addiu $s6, $s6, 0x12
    v1 = *(int32_t*)((s2) + 0x58);                              // 0x0012eb64: lw $v1, 0x58($s2)
    v1 = (s5 < v1) ? 1 : 0;                                     // 0x0012eb68: slt $v1, $s5, $v1
    /* bnezl $v1, 0x12eab8 */                                   // 0x0012eb6c: bnezl $v1, 0x12eab8
    a0 = *(uint16_t*)((s2) + 0x2d0);                            // 0x0012eb70: lhu $a0, 0x2d0($s2)
label_0x12eb74:
    return;                                                     // 0x0012eb98: jr $ra
    sp = sp + 0x50;                                             // 0x0012eb9c: addiu $sp, $sp, 0x50
}