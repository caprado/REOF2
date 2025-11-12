void func_00166580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a3 << 3;                                               // 0x00166580: sll $v0, $a3, 3
    sp = sp + -0x50;                                            // 0x00166584: addiu $sp, $sp, -0x50
    v0 = v0 - a3;                                               // 0x00166588: subu $v0, $v0, $a3
    t1 = a3 << 2;                                               // 0x0016658c: sll $t1, $a3, 2
    v0 = v0 << 2;                                               // 0x00166594: sll $v0, $v0, 2
    a2 = a2 + t1;                                               // 0x0016659c: addu $a2, $a2, $t1
    v0 = v0 + a3;                                               // 0x001665a4: addu $v0, $v0, $a3
    v0 = v0 << 2;                                               // 0x001665ac: sll $v0, $v0, 2
    s0 = a0 + v0;                                               // 0x001665b4: addu $s0, $a0, $v0
    a1 = a1 + t1;                                               // 0x001665bc: addu $a1, $a1, $t1
    v1 = *(int32_t*)(a2);                                       // 0x001665c0: lw $v1, 0($a2)
    s1 = s0 + 0x10;                                             // 0x001665c8: addiu $s1, $s0, 0x10
    if (v1 != 0) goto label_0x1665e0;                           // 0x001665cc: bnez $v1, 0x1665e0
    goto label_0x166618;                                        // 0x001665d8: b 0x166618
    s2 = 4;                                                     // 0x001665dc: addiu $s2, $zero, 4
label_0x1665e0:
    a1 = *(int32_t*)(a1);                                       // 0x001665e0: lw $a1, 0($a1)
    s3 = 1;                                                     // 0x001665e4: addiu $s3, $zero, 1
    func_001666a0();  // 0x166648                                // 0x001665e8: jal 0x166648
    s2 = 5;                                                     // 0x001665ec: addiu $s2, $zero, 5
    if (v0 != 0) goto label_0x166610;                           // 0x001665fc: bnez $v0, 0x166610
    a3 = 1;                                                     // 0x00166600: addiu $a3, $zero, 1
    goto label_0x16662c;                                        // 0x00166604: b 0x16662c
    v0 = -1;                                                    // 0x00166608: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0016660c: nop 
label_0x166610:
    func_00166bc8();  // 0x166b28                                // 0x00166610: jal 0x166b28
    /* nop */                                                   // 0x00166614: nop 
label_0x166618:
    func_001669c8();  // 0x166978                                // 0x00166620: jal 0x166978
label_0x16662c:
    return;                                                     // 0x00166640: jr $ra
    sp = sp + 0x50;                                             // 0x00166644: addiu $sp, $sp, 0x50
}