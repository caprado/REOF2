void func_00172ed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172ed0: addiu $sp, $sp, -0x20
    v1 = s0 + 0x9a0;                                            // 0x00172ee0: addiu $v1, $s0, 0x9a0
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00172eec: lw $v0, 0x18($v1)
    if (v0 != 0) goto label_0x172f08;                           // 0x00172ef0: bnez $v0, 0x172f08
    a1 = 6;                                                     // 0x00172ef4: addiu $a1, $zero, 6
    v1 = *(int32_t*)((v1) + 0x14);                              // 0x00172ef8: lw $v1, 0x14($v1)
    if (v1 == 0) goto label_0x172f80;                           // 0x00172efc: beqz $v1, 0x172f80
    v0 = 1;                                                     // 0x00172f00: addiu $v0, $zero, 1
    a1 = 6;                                                     // 0x00172f04: addiu $a1, $zero, 6
label_0x172f08:
    func_00177950();  // 0x177938                                // 0x00172f08: jal 0x177938
    a1 = 7;                                                     // 0x00172f14: addiu $a1, $zero, 7
    func_00177950();  // 0x177938                                // 0x00172f18: jal 0x177938
    a1 = 0x19;                                                  // 0x00172f24: addiu $a1, $zero, 0x19
    func_001752f8();  // 0x1752e8                                // 0x00172f28: jal 0x1752e8
    v0 = 1;                                                     // 0x00172f34: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x172f68;                          // 0x00172f38: beq $v1, $v0, 0x172f68
    /* beqzl $v1, 0x172f7c */                                   // 0x00172f40: beqzl $v1, 0x172f7c
    a0 = s1 & s2;                                               // 0x00172f44: and $a0, $s1, $s2
    v0 = 2;                                                     // 0x00172f48: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x172f70;                          // 0x00172f4c: beq $v1, $v0, 0x172f70
    v0 = 3;                                                     // 0x00172f50: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x172f78;                          // 0x00172f54: beq $v1, $v0, 0x172f78
    goto label_0x172f84;                                        // 0x00172f5c: b 0x172f84
    /* nop */                                                   // 0x00172f64: nop 
label_0x172f68:
    goto label_0x172f7c;                                        // 0x00172f68: b 0x172f7c
label_0x172f70:
    goto label_0x172f7c;                                        // 0x00172f70: b 0x172f7c
label_0x172f78:
    a0 = s1 | s2;                                               // 0x00172f78: or $a0, $s1, $s2
label_0x172f7c:
label_0x172f80:
label_0x172f84:
    return;                                                     // 0x00172f90: jr $ra
    sp = sp + 0x20;                                             // 0x00172f94: addiu $sp, $sp, 0x20
}