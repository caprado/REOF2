void func_00173c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173c70: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00173c88: jal 0x169af0
    *(uint32_t*)(s0) = 0;                                       // 0x00173c8c: sw $zero, 0($s0)
    a1 = 0xff00 << 16;                                          // 0x00173c94: lui $a1, 0xff00
    a2 = 0xb;                                                   // 0x00173c98: addiu $a2, $zero, 0xb
    if (v0 == 0) goto label_0x173cc0;                           // 0x00173ca4: beqz $v0, 0x173cc0
    a1 = a1 | 0x136;                                            // 0x00173ca8: ori $a1, $a1, 0x136
    return func_00169940();  // Tail call                        // 0x00173cb8: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00173cbc: addiu $sp, $sp, 0x20
label_0x173cc0:
    func_001778a0();  // 1778a0                                // 0x00173cc4: jal 0x1778a0
    a1 = 6;                                                     // 0x00173cc8: addiu $a1, $zero, 6
    v1 = *(int32_t*)(s0);                                       // 0x00173ccc: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x173cdc;                           // 0x00173cd0: beqz $v1, 0x173cdc
    v1 = 1;                                                     // 0x00173cd4: addiu $v1, $zero, 1
    *(uint32_t*)((s1) + 0x960) = v1;                            // 0x00173cd8: sw $v1, 0x960($s1)
label_0x173cdc:
    return;                                                     // 0x00173ce8: jr $ra
    sp = sp + 0x20;                                             // 0x00173cec: addiu $sp, $sp, 0x20
}