void func_001303a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001303a0: addiu $sp, $sp, -0x10
    func_00141390();  // 141390                                // 0x001303ac: jal 0x141390
    v0 = *(int32_t*)(s0);                                       // 0x001303b4: lw $v0, 0($s0)
    v1 = 0xff << 16;                                            // 0x001303b8: lui $v1, 0xff
    v1 = v1 | 0xff00;                                           // 0x001303bc: ori $v1, $v1, 0xff00
    a0 = 1 << 16;                                               // 0x001303c0: lui $a0, 1
    v0 = v0 & v1;                                               // 0x001303c4: and $v0, $v0, $v1
    a0 = a0 | 0x200;                                            // 0x001303c8: ori $a0, $a0, 0x200
    if (v0 != a0) goto label_0x1303f0;                          // 0x001303cc: bne $v0, $a0, 0x1303f0
    a1 = 1;                                                     // 0x001303d0: addiu $a1, $zero, 1
    v1 = *(int8_t*)((s0) + 0x43);                               // 0x001303d4: lb $v1, 0x43($s0)
    v0 = 1;                                                     // 0x001303d8: addiu $v0, $zero, 1
    if (v1 != a1) goto label_0x1303f8;                          // 0x001303dc: bne $v1, $a1, 0x1303f8
    *(uint8_t*)((s0) + 0x44) = v0;                              // 0x001303e0: sb $v0, 0x44($s0)
    goto label_0x1303f8;                                        // 0x001303e4: b 0x1303f8
    *(uint8_t*)((s0) + 0x43) = 0;                               // 0x001303e8: sb $zero, 0x43($s0)
    /* nop */                                                   // 0x001303ec: nop 
label_0x1303f0:
    v0 = 1;                                                     // 0x001303f0: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001303f4: sb $v0, 1($s0)
label_0x1303f8:
    return func_001413c0();  // Tail call                        // 0x00130400: j 0x1413a8
    sp = sp + 0x10;                                             // 0x00130404: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00130408: addiu $sp, $sp, -0x20
    func_001303a0();  // 1303a0                                // 0x0013041c: jal 0x1303a0
    s1 = 1;                                                     // 0x00130420: addiu $s1, $zero, 1
    /* nop */                                                   // 0x00130424: nop 
label_0x130428:
    func_00129ce0();  // 129ce0                                // 0x00130428: jal 0x129ce0
    /* nop */                                                   // 0x0013042c: nop 
    v0 = *(int8_t*)((s0) + 1);                                  // 0x00130430: lb $v0, 1($s0)
    if (v0 != s1) goto label_0x130428;                          // 0x00130434: bne $v0, $s1, 0x130428
    /* nop */                                                   // 0x00130438: nop 
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013043c: lw $v0, 0x20($s0)
    if (v0 != 0) goto label_0x130428;                           // 0x00130440: bnez $v0, 0x130428
    return;                                                     // 0x00130450: jr $ra
    sp = sp + 0x20;                                             // 0x00130454: addiu $sp, $sp, 0x20
}