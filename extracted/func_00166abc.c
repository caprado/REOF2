void func_00166abc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00166abc: addiu $sp, $sp, -0x10
    v0 = v0 - a2;                                               // 0x00166ac0: subu $v0, $v0, $a2
    v0 = v0 << 2;                                               // 0x00166ac8: sll $v0, $v0, 2
    v1 = a0 + 0x1140;                                           // 0x00166acc: addiu $v1, $a0, 0x1140
    v0 = v0 + a2;                                               // 0x00166ad0: addu $v0, $v0, $a2
    a3 = 4;                                                     // 0x00166ad4: addiu $a3, $zero, 4
    v0 = v0 << 2;                                               // 0x00166ad8: sll $v0, $v0, 2
    v1 = v1 + v0;                                               // 0x00166ae0: addu $v1, $v1, $v0
    v0 = *(int32_t*)(v1);                                       // 0x00166ae4: lw $v0, 0($v1)
    if (v0 == a3) goto label_0x166b08;                          // 0x00166aec: beq $v0, $a3, 0x166b08
    v1 = v1 + 0x10;                                             // 0x00166af0: addiu $v1, $v1, 0x10
    a1 = 0xff00 << 16;                                          // 0x00166af4: lui $a1, 0xff00
    a1 = a1 | 0x409;                                            // 0x00166afc: ori $a1, $a1, 0x409
    return func_00169940();  // Tail call                        // 0x00166b00: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00166b04: addiu $sp, $sp, 0x10
label_0x166b08:
    a3 = *(int32_t*)((t0) + 4);                                 // 0x00166b08: lw $a3, 4($t0)
    func_00166b28();  // 166b28                                // 0x00166b10: jal 0x166b28
    a3 = ((unsigned)0 < (unsigned)a3) ? 1 : 0;                  // 0x00166b14: sltu $a3, $zero, $a3
    return;                                                     // 0x00166b20: jr $ra
    sp = sp + 0x10;                                             // 0x00166b24: addiu $sp, $sp, 0x10
}