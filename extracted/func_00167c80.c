void func_00167c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00167c80: addiu $sp, $sp, -0x40
    s0 = s2 + 0xcc0;                                            // 0x00167c90: addiu $s0, $s2, 0xcc0
    func_00169ba0();  // 0x169b88                                // 0x00167cac: jal 0x169b88
    v1 = *(int32_t*)((s0) + 0x1b4);                             // 0x00167cb4: lw $v1, 0x1b4($s0)
    v0 = *(int32_t*)((s0) + 0x1b0);                             // 0x00167cb8: lw $v0, 0x1b0($s0)
    v0 = v0 - v1;                                               // 0x00167cbc: subu $v0, $v0, $v1
    if (v0 > 0) goto label_0x167cd8;                            // 0x00167cc0: bgtz $v0, 0x167cd8
    v0 = -1;                                                    // 0x00167cc8: addiu $v0, $zero, -1
    goto label_0x167d20;                                        // 0x00167cd0: b 0x167d20
    *(uint32_t*)(s3) = v0;                                      // 0x00167cd4: sw $v0, 0($s3)
label_0x167cd8:
    v0 = *(int32_t*)((s0) + 0x1a8);                             // 0x00167cd8: lw $v0, 0x1a8($s0)
    s4 = 1;                                                     // 0x00167cdc: addiu $s4, $zero, 1
    *(uint32_t*)(s1) = v0;                                      // 0x00167ce0: sw $v0, 0($s1)
    v1 = *(int32_t*)((s0) + 0x1b4);                             // 0x00167ce4: lw $v1, 0x1b4($s0)
    a1 = (v1 < 0) ? 1 : 0;                                      // 0x00167ce8: slti $a1, $v1, 0
    a2 = v1 + 0x1f;                                             // 0x00167cec: addiu $a2, $v1, 0x1f
    if (a1 != 0) v0 = a2;                                       // 0x00167cf4: movn $v0, $a2, $a1
    v0 = v0 >> 5;                                               // 0x00167cf8: sra $v0, $v0, 5
    v0 = v0 << 5;                                               // 0x00167cfc: sll $v0, $v0, 5
    v1 = v1 - v0;                                               // 0x00167d00: subu $v1, $v1, $v0
    v1 = v1 << 2;                                               // 0x00167d04: sll $v1, $v1, 2
    v1 = v1 + s2;                                               // 0x00167d08: addu $v1, $v1, $s2
    a1 = *(int32_t*)((v1) + 0xe78);                             // 0x00167d0c: lw $a1, 0xe78($v1)
    *(uint32_t*)(s3) = a1;                                      // 0x00167d10: sw $a1, 0($s3)
    v0 = *(int32_t*)((s0) + 0x1b4);                             // 0x00167d14: lw $v0, 0x1b4($s0)
    v0 = v0 + 1;                                                // 0x00167d18: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x1b4) = v0;                            // 0x00167d1c: sw $v0, 0x1b4($s0)
label_0x167d20:
    func_00169bc8();  // 0x169ba0                                // 0x00167d20: jal 0x169ba0
    /* nop */                                                   // 0x00167d24: nop 
    return;                                                     // 0x00167d44: jr $ra
    sp = sp + 0x40;                                             // 0x00167d48: addiu $sp, $sp, 0x40
}