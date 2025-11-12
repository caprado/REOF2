void func_001cef30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cef30: addiu $sp, $sp, -0x20
    a0 = 1;                                                     // 0x001cef34: addiu $a0, $zero, 1
    v0 = 3;                                                     // 0x001cef3c: addiu $v0, $zero, 3
    a1 = *(int32_t*)((gp) + -0x6260);                           // 0x001cef44: lw $a1, -0x6260($gp)
    *(uint32_t*)((gp) + -0x62cc) = a0;                          // 0x001cef48: sw $a0, -0x62cc($gp)
    v1 = *(int32_t*)(a1);                                       // 0x001cef4c: lw $v1, 0($a1)
    if (v1 == v0) goto label_0x1cf058;                          // 0x001cef50: beq $v1, $v0, 0x1cf058
    v0 = -1;                                                    // 0x001cef54: addiu $v0, $zero, -1
    if (v1 == a0) goto label_0x1cef78;                          // 0x001cef58: beq $v1, $a0, 0x1cef78
    v0 = 2;                                                     // 0x001cef5c: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1cef70;                          // 0x001cef60: beq $v1, $v0, 0x1cef70
    /* nop */                                                   // 0x001cef64: nop 
    goto label_0x1cf064;                                        // 0x001cef68: b 0x1cf064
label_0x1cef70:
    goto label_0x1cf064;                                        // 0x001cef70: b 0x1cf064
    v0 = -1;                                                    // 0x001cef74: addiu $v0, $zero, -1
label_0x1cef78:
    v0 = *(int32_t*)((a1) + 4);                                 // 0x001cef78: lw $v0, 4($a1)
    if (v0 == a0) goto label_0x1cef8c;                          // 0x001cef7c: beq $v0, $a0, 0x1cef8c
    v0 = -1;                                                    // 0x001cef80: addiu $v0, $zero, -1
    goto label_0x1cef94;                                        // 0x001cef84: b 0x1cef94
    a0 = 0x24 << 16;                                            // 0x001cef88: lui $a0, 0x24
label_0x1cef8c:
    goto label_0x1cf068;                                        // 0x001cef8c: b 0x1cf068
label_0x1cef94:
    func_0011c140();  // 0x11c0a0                                // 0x001cef94: jal 0x11c0a0
    a0 = &str_00243a10;  // "INET_LANEGG_driver"                // 0x001cef98: addiu $a0, $a0, 0x3a10
    at = (v0 < 0) ? 1 : 0;                                      // 0x001cef9c: slt $at, $v0, $zero
    if (at != 0) goto label_0x1cefb4;                           // 0x001cefa0: bnez $at, 0x1cefb4
    s0 = -1;                                                    // 0x001cefa4: addiu $s0, $zero, -1
    func_001cea30();  // 0x1ce990                                // 0x001cefa8: jal 0x1ce990
    s0 = -1;                                                    // 0x001cefb0: addiu $s0, $zero, -1
label_0x1cefb4:
    func_001c8c80();  // 0x1c8c40                                // 0x001cefb4: jal 0x1c8c40
    /* nop */                                                   // 0x001cefb8: nop 
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001cefbc: lw $v1, -0x6260($gp)
    v0 = 5;                                                     // 0x001cefc0: addiu $v0, $zero, 5
    v1 = *(int32_t*)((v1) + 4);                                 // 0x001cefc4: lw $v1, 4($v1)
    if (v1 == v0) goto label_0x1ceff4;                          // 0x001cefc8: beq $v1, $v0, 0x1ceff4
    a0 = 0x24 << 16;                                            // 0x001cefcc: lui $a0, 0x24
    v0 = 6;                                                     // 0x001cefd0: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1cefe4;                          // 0x001cefd4: beq $v1, $v0, 0x1cefe4
    a0 = 0x24 << 16;                                            // 0x001cefd8: lui $a0, 0x24
    goto label_0x1cf004;                                        // 0x001cefdc: b 0x1cf004
    at = (s0 < 0) ? 1 : 0;                                      // 0x001cefe0: slt $at, $s0, $zero
label_0x1cefe4:
    func_0011c140();  // 0x11c0a0                                // 0x001cefe4: jal 0x11c0a0
    a0 = &str_00243a30;  // "INET_SMAP_driver"                  // 0x001cefe8: addiu $a0, $a0, 0x3a30
    goto label_0x1cf000;                                        // 0x001cefec: b 0x1cf000
label_0x1ceff4:
    func_0011c140();  // 0x11c0a0                                // 0x001ceff4: jal 0x11c0a0
    a0 = a0 + 0x3a50;                                           // 0x001ceff8: addiu $a0, $a0, 0x3a50
label_0x1cf000:
    at = (s0 < 0) ? 1 : 0;                                      // 0x001cf000: slt $at, $s0, $zero
label_0x1cf004:
    if (at != 0) goto label_0x1cf014;                           // 0x001cf004: bnez $at, 0x1cf014
    func_001cea30();  // 0x1ce990                                // 0x001cf00c: jal 0x1ce990
    /* nop */                                                   // 0x001cf010: nop 
label_0x1cf014:
    a0 = *(int32_t*)((gp) + -0x6568);                           // 0x001cf014: lw $a0, -0x6568($gp)
    func_001cebd0();  // 0x1cea30                                // 0x001cf024: jal 0x1cea30
    a0 = 0x32 << 16;                                            // 0x001cf02c: lui $a0, 0x32
    v0 = 0x127 << 16;                                           // 0x001cf030: lui $v0, 0x127
    a0 = a0 + 0x59c0;                                           // 0x001cf034: addiu $a0, $a0, 0x59c0
    func_001cf5f0();  // 0x1cf580                                // 0x001cf038: jal 0x1cf580
    a1 = v0 | 0x10;                                             // 0x001cf03c: ori $a1, $v0, 0x10
    func_001cef30();  // 0x1ceef0                                // 0x001cf040: jal 0x1ceef0
    *(uint32_t*)((gp) + -0x6260) = 0;                           // 0x001cf044: sw $zero, -0x6260($gp)
    func_001cf580();  // 0x1cf420                                // 0x001cf048: jal 0x1cf420
    /* nop */                                                   // 0x001cf04c: nop 
    goto label_0x1cf060;                                        // 0x001cf050: b 0x1cf060
    /* nop */                                                   // 0x001cf054: nop 
label_0x1cf058:
    goto label_0x1cf064;                                        // 0x001cf058: b 0x1cf064
    /* nop */                                                   // 0x001cf05c: nop 
label_0x1cf060:
label_0x1cf064:
label_0x1cf068:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cf068: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cf06c: jr $ra
    sp = sp + 0x20;                                             // 0x001cf070: addiu $sp, $sp, 0x20
}