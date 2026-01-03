void func_00167b40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00167b40: addiu $sp, $sp, -0x30
    s0 = s2 + 0xcc0;                                            // 0x00167b50: addiu $s0, $s2, 0xcc0
    func_00169b88();  // 169b88                                // 0x00167b60: jal 0x169b88
    a2 = *(int32_t*)((s0) + 0x120);                             // 0x00167b68: lw $a2, 0x120($s0)
    v1 = *(int32_t*)((s0) + 0x124);                             // 0x00167b6c: lw $v1, 0x124($s0)
    a2 = a2 + s1;                                               // 0x00167b74: addu $a2, $a2, $s1
    v1 = v1 + 1;                                                // 0x00167b78: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0x120) = a2;                            // 0x00167b7c: sw $a2, 0x120($s0)
    a3 = v1 + 0x1f;                                             // 0x00167b80: addiu $a3, $v1, 0x1f
    a1 = (v1 < 0) ? 1 : 0;                                      // 0x00167b84: slti $a1, $v1, 0
    if (a1 != 0) v0 = a3;                                       // 0x00167b8c: movn $v0, $a3, $a1
    v0 = v0 >> 5;                                               // 0x00167b90: sra $v0, $v0, 5
    v0 = v0 << 5;                                               // 0x00167b94: sll $v0, $v0, 5
    v0 = v1 - v0;                                               // 0x00167b98: subu $v0, $v1, $v0
    v0 = v0 << 2;                                               // 0x00167b9c: sll $v0, $v0, 2
    v0 = v0 + s2;                                               // 0x00167ba0: addu $v0, $v0, $s2
    *(uint32_t*)((v0) + 0xde8) = a2;                            // 0x00167ba4: sw $a2, 0xde8($v0)
    func_00169ba0();  // 169ba0                                // 0x00167ba8: jal 0x169ba0
    *(uint32_t*)((s0) + 0x124) = v1;                            // 0x00167bac: sw $v1, 0x124($s0)
    return;                                                     // 0x00167bc0: jr $ra
    sp = sp + 0x30;                                             // 0x00167bc4: addiu $sp, $sp, 0x30
}