void func_00174b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174b20: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00174b38: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174b40: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174b68;                           // 0x00174b44: beqz $v0, 0x174b68
    a1 = a1 | 0x158;                                            // 0x00174b50: ori $a1, $a1, 0x158
    return func_00169940();  // Tail call                        // 0x00174b60: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00174b64: addiu $sp, $sp, 0x20
label_0x174b68:
    s1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174b68: lw $s1, 0x2ab0($s0)
    /* beqzl $s1, 0x174c04 */                                   // 0x00174b6c: beqzl $s1, 0x174c04
    func_00173840();  // 173840                                // 0x00174b74: jal 0x173840
    a1 = 0x2f;                                                  // 0x00174b80: addiu $a1, $zero, 0x2f
    if (v0 != 0) goto label_0x174c00;                           // 0x00174b84: bnez $v0, 0x174c00
    func_00175120();  // 175120                                // 0x00174b8c: jal 0x175120
    /* nop */                                                   // 0x00174b90: nop 
    v0 = *(int32_t*)((s1) + 0xda4);                             // 0x00174b98: lw $v0, 0xda4($s1)
    a1 = 5;                                                     // 0x00174b9c: addiu $a1, $zero, 5
    if (v0 != 0) goto label_0x174bb0;                           // 0x00174ba0: bnez $v0, 0x174bb0
    func_00175120();  // 175120                                // 0x00174ba8: jal 0x175120
    /* nop */                                                   // 0x00174bac: nop 
label_0x174bb0:
    v0 = *(int32_t*)((s1) + 0xda8);                             // 0x00174bb0: lw $v0, 0xda8($s1)
    if (v0 != 0) goto label_0x174bc8;                           // 0x00174bb4: bnez $v0, 0x174bc8
    a1 = 6;                                                     // 0x00174bbc: addiu $a1, $zero, 6
    func_00175120();  // 175120                                // 0x00174bc0: jal 0x175120
label_0x174bc8:
    v1 = *(int32_t*)((s2) + 8);                                 // 0x00174bd0: lw $v1, 8($s2)
    *(uint32_t*)((s0) + 0x2abc) = v1;                           // 0x00174bdc: sw $v1, 0x2abc($s0)
    a1 = 0xd;                                                   // 0x00174be8: addiu $a1, $zero, 0xd
    return func_001778a0();  // Tail call                        // 0x00174bf8: j 0x177808
    sp = sp + 0x20;                                             // 0x00174bfc: addiu $sp, $sp, 0x20
label_0x174c00:
    return;                                                     // 0x00174c10: jr $ra
    sp = sp + 0x20;                                             // 0x00174c14: addiu $sp, $sp, 0x20
}