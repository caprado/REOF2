void func_00173178() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00173178: addiu $sp, $sp, -0x30
    v0 = 0x21 << 16;                                            // 0x0017317c: lui $v0, 0x21
    func_00173210();  // 173210                                // 0x0017319c: jal 0x173210
    s3 = v0 + 0x578c;                                           // 0x001731a0: addiu $s3, $v0, 0x578c
    a1 = 0xff00 << 16;                                          // 0x001731a4: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1731c0;                           // 0x001731a8: beqz $v0, 0x1731c0
    func_001698d0();  // 1698d0                                // 0x001731b0: jal 0x1698d0
    a1 = a1 | 0x203;                                            // 0x001731b4: ori $a1, $a1, 0x203
    goto label_0x1731f0;                                        // 0x001731b8: b 0x1731f0
label_0x1731c0:
    func_00173230();  // 173230                                // 0x001731c0: jal 0x173230
    /* nop */                                                   // 0x001731c4: nop 
    v1 = -1;                                                    // 0x001731c8: addiu $v1, $zero, -1
    if (s0 == v1) goto label_0x1731f0;                          // 0x001731d0: beq $s0, $v1, 0x1731f0
    func_00173270();  // 173270                                // 0x001731dc: jal 0x173270
    v1 = s0 << 2;                                               // 0x001731e4: sll $v1, $s0, 2
    v1 = v1 + s3;                                               // 0x001731e8: addu $v1, $v1, $s3
    *(uint32_t*)(v1) = v0;                                      // 0x001731ec: sw $v0, 0($v1)
label_0x1731f0:
    return;                                                     // 0x00173204: jr $ra
    sp = sp + 0x30;                                             // 0x00173208: addiu $sp, $sp, 0x30
}